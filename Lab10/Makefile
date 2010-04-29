##
# Makefile
# CS240 Lab 10
# @author J. Andrew Marshall (jmarsha6)
# @author Aaron Shipper (ashippe1)
# @author Kenneth Louie (klouie1)


# Specify the compiler
GXX=g++ -g -Wall

# Specify the target
all: wordcount.exe

# Link objects into binary
wordcount.exe: BinarySearchTree.o TreeNode.o Driver.o
	$(GXX) Driver.o BinarySearchTree.o TreeNode.o -o wordcount.exe

# Compile source code into object files
BinarySearchTree.o: BinarySearchTree.cpp BinarySearchTree.h
	$(GXX) -c BinarySearchTree.cpp

TreeNode.o: TreeNode.cpp TreeNode.h
	$(GXX) -c TreeNode.cpp

Driver.o: Driver.cpp
	$(GXX) -c Driver.cpp

# Delete object, binary, and temporary files
clean:
	rm -rf *.o *~ core *.exe
