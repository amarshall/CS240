# Specifiy the target
all: search.exe

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
search.exe: SearchClass.o Driver.o
	g++  SearchClass.o Driver.o -o search.exe

# Specify how the object files should be created from source files
SearchClass.o: SearchClass.cpp
	g++  -c  SearchClass.cpp

Driver.o: Driver.cpp
	g++  -c  Driver.cpp


# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o search.exe
