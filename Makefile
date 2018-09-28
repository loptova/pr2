all: practice

practice: main.o
	g++ main.o scripts.h menu.h Practice.h -o practice

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -rf *o practice
