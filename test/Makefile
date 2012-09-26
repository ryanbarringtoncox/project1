AQSRC = ../src/AQueue
LLQSRC = ../src/LListQueue
LQSRC = ../src/ListQueue
BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: list_queue_test ll_queue_test a_queue_test

list_queue_test: Queue.cpp $(LQSRC)/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o list_queue_test Queue.cpp $(LQSRC)/Queue.o $(GTEST_MAINA)


ll_queue_test: Queue.cpp $(LLQSRC)/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o ll_queue_test Queue.cpp $(LLQSRC)/Queue.o $(GTEST_MAINA)


a_queue_test: Queue.cpp $(AQSRC)/Queue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o a_queue_test Queue.cpp $(AQSRC)/Queue.o $(GTEST_MAINA)


$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f queue_test
	rm -f list_queue_test
	rm -f ll_queue_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean
