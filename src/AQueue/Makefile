BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra

test: queue_test.cpp Queue.o
	$(CPP) $(CPPFLAGS) -o test queue_test.cpp Queue.o

Queue.o: Queue.h Queue.cpp
	$(CPP) $(CPPFLAGS) -c Queue.cpp

clean:
	rm -f test
	rm -f *.o
