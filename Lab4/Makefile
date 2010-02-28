##
# Makefile
# CS240 Lab 4
# @author J. Andrew Marshall (jmarsha6)
 
# Specify target
all: fraction.exe

# Link object files into binary
fraction.exe: Fraction.o FractionUtil.o FractionUser.o
	g++ -Wall Fraction.o FractionUtil.o FractionUser.o -o fraction.exe

# Compile source code into object files
Fraction.o: Fraction.cpp
	g++ -Wall -c Fraction.cpp
FractionUtil.o: FractionUtil.cpp
	g++ -Wall -c FractionUtil.cpp
FractionUser.o: FractionUser.cpp
	g++ -Wall -c FractionUser.cpp

# Delete object and binary files
clean:
	rm -f *.o fraction.exe
