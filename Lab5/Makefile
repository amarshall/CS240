##
# Makefile
# CS240 Lab 5
# @author J. Andrew Marshall (jmarsha6)


# Specify the compiler
GXX=g++ -g -Wall

# Specify the target
all: linkedList.exe

# Link objects into binary
linkedList.exe: StudentRecord.o Node.o LinkedList.o ListMain.o
	$(GXX) StudentRecord.o Node.o LinkedList.o ListMain.o -o linkedList.exe

# Compile source code into object files
LinkedList.o: LinkedList.cpp
	$(GXX) -c LinkedList.cpp

ListMain.o: ListMain.cpp
	$(GXX) -c ListMain.cpp

StudentRecord.o: StudentRecord.cpp
	$(GXX) -c StudentRecord.cpp

Node.o: Node.cpp
	$(GXX) -c Node.cpp

# Delete object, binary, and temporary files
clean:
	rm -rf *.o *~ core *.exe
	
