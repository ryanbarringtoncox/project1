TIMESRC = ./src/time
AQSRC = ./src/AQueue
LLQSRC = ./src/LListQueue
LQSRC = ./src/ListQueue
BUILD = ./build
TEST = ./test
LIB = ./lib

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(LQSRC)/Queue.o $(AQSRC)/Queue.o $(LLQSRC)/Queue.o $(LLQSRC)/Node.o 

$(LQSRC)/Queue.o: $(LQSRC)/Queue.h $(LQSRC)/Queue.cpp
	cd $(LQSRC); $(MAKE)

$(AQSRC)/Queue.o: $(AQSRC)/Queue.h $(AQSRC)/Queue.cpp
	cd $(AQSRC); $(MAKE)

$(LLQSRC)/Queue.o: $(LLQSRC)/Queue.h $(LLQSRC)/Queue.cpp
	cd $(LLQSRC); $(MAKE)

$(TIMESRC)/Node.o: $(LLQSRC)/Node.h ($LLQSRC)/Node.cpp
	cd $(LLQSRC); $(MAKE)

clean:
	cd $(LQSRC); $(MAKE) clean
	cd $(AQSRC); $(MAKE) clean
	cd $(LLQSRC); $(MAKE) clean	
	cd $(TEST); $(MAKE) clean
	cd $(TIMESRC); $(MAKE) clean
