AQSRC = ./src/AQueue
LLSRC = ./src/LListQueue
LQSRC = ./src/ListQueue
BUILD = ./build
TEST = ./test
LIB = ./lib

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

#$(BUILD)/main: $(SRC)/Stack.cpp $(SRC)/Stack.o
#	cd $(SRC); $(MAKE)

#$(TEST)/stack_test: $(TEST)/Stack.cpp $(SRC)/Stack.o
#	cd $(TEST); $(MAKE)

clean:
	cd $(LQSRC); $(MAKE) clean
	cd $(AQSRC); $(MAKE) clean
	cd $(LLSRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

