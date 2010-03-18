##
# Makefile
# CS240 Lab 7
# @author J. Andrew Marshall (jmarsha6)
# @author Aaron Shipper (ashippe1)


# Specify the compiler
GXX=g++ -g -Wall

# Specify the target
all: linkedList.exe

# Link objects into binary
linkedList.exe: StudentRecord.o EmployeeRecord.o ListMain.o
	$(GXX) StudentRecord.o EmployeeRecord.o ListMain.o -o linkedList.exe

# Compile source code into object files
ListMain.o: ListMain.cpp
	$(GXX) -c ListMain.cpp

StudentRecord.o: StudentRecord.cpp
	$(GXX) -c StudentRecord.cpp

EmployeeRecord.o: EmployeeRecord.cpp
	$(GXX) -c EmployeeRecord.cpp

# Delete object, binary, and temporary files
clean:
	rm -rf *.o *~ core *.exe

