all: lab3

StreamOperations.o: StreamOperations.cpp
	g++ -c StreamOperations.cpp -o StreamOperations.o
Driver.o: Driver.cpp
	g++ -c Driver.cpp -o Driver.o

lab3: StreamOperations.o Driver.o
	g++ StreamOperations.o Driver.o -o lab3.exe

