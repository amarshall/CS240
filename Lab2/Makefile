all: Hello.exe

Hello.exe: Hello.o
	g++ Hello.o -o Hello.exe
Hello.o: Hello.cpp
	g++ -c Hello.cpp

clean:
	rm -f *.o Hello.exe
