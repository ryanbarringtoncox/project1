BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra

test: queue_test.cpp Node.o Queue.o 
	$(CPP) $(CPPFLAGS) -o test queue_test.cpp Node.o Queue.o 

Node.o: Node.h Node.cpp
	$(CPP) $(CPPFLAGS) -c Node.cpp

Queue.o: Queue.h Queue.cpp Node.o
	$(CPP) $(CPPFLAGS) -c Queue.cpp 

clean:
	rm -f test
	rm *.o

