AQSRC = ./src/AQueue
LLQSRC = ./src/LListQueue
LQSRC = ./src/ListQueue
BUILD = ./build
TEST = ./test
LIB = ./lib

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(LQSRC)/Queue.o $(AQSRC)/Queue.o $(LLQSRC)/Queue.o $(LLQSRC)/Node.o 

#all: $(BUILD)/main $(TEST)/queue_test

#$(BUILD)/main: $(SRC)/Stack.cpp $(SRC)/Stack.o
#	cd $(SRC); $(MAKE)

#$(TEST)/queue_test: $(TEST)/Queue.cpp $(SRC)/Stack.o
#	cd $(TEST); $(MAKE)

$(LQSRC)/Queue.o: $(LQSRC)/Queue.h $(LQSRC)/Queue.cpp
	cd $(LQSRC); $(MAKE)

$(AQSRC)/Queue.o: $(AQSRC)/Queue.h $(AQSRC)/Queue.cpp
	cd $(AQSRC); $(MAKE)

$(LLQSRC)/Queue.o: $(LLQSRC)/Queue.h $(LLQSRC)/Queue.cpp
	cd $(LLQSRC); $(MAKE)

#$(LLQSRC)/Node.o: $(LLQSRC)/Node.h ($LLQSRC)/Node.cpp
#	cd $(LLQSRC); $(MAKE)

clean:
	cd $(LQSRC); $(MAKE) clean
	cd $(AQSRC); $(MAKE) clean
	cd $(LLQSRC); $(MAKE) clean	
	cd $(TEST); $(MAKE) clean

