##
# Makefile
# CS240 Lab 9
# @author J. Andrew Marshall (jmarsha6)
# @author Ahmet Iscen (aiscen1)


# Specify the compiler
GXX=g++ -g -Wall

# Specify the target
all: search.exe

# Link objects into binary
search.exe: BinarySearchTree.o TreeNode.o SearchClass.o Driver.o
	$(GXX) Driver.o BinarySearchTree.o TreeNode.o SearchClass.o -o search.exe

# Compile source code into object files
BinarySearchTree.o: BinarySearchTree.cpp BinarySearchTree.h
	$(GXX) -c BinarySearchTree.cpp

TreeNode.o: TreeNode.cpp TreeNode.h
	$(GXX) -c TreeNode.cpp

Driver.o: Driver.cpp
	$(GXX) -c Driver.cpp

SearchClass.o: SearchClass.cpp SearchClass.h
	$(GXX) -c SearchClass.cpp

# Delete object, binary, and temporary files
clean:
	rm -rf *.o *~ core *.exe
