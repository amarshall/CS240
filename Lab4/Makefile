##
# Makefile
# CS240 Lab 4
# @author J. Andrew Marshall (jmarsha6)
 
# Specify target
all: fraction.exe

# Link object files into binary
fraction.exe: Fraction.o FractionUtil.o FractionUser.o
	g++ Fraction.o FractionUtil.o FractionUser.o -o fraction.exe

# Compile source code into object files
Fraction.o: Fraction.cpp
	g++ -c Fraction.cpp
FractionUtil.o: FractionUtil.cpp
	g++ -c FractionUtil.cpp
FractionUser.o: FractionUser.cpp
	g++ -c FractionUser.cpp

# Delete object and binary files
clean:
	rm -f *.o fraction.exe
