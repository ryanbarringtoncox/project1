AQSRC = ../src/AQueue
LLQSRC = ../src/LListQueue
LQSRC = ../src/ListQueue
BUILD = ../build
TEST = ../test
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

all: list_queue_test a_queue_test ll_queue_test 

list_queue_test: Time.cpp $(LQSRC)/Queue.o
	$(CPP) $(CFLAGS) -o list_queue_test Time.cpp $(LQSRC)/Queue.o


ll_queue_test: Time.cpp $(LLQSRC)/Queue.o $(LLQSRC)/Node.o
	$(CPP) $(CFLAGS) -o ll_queue_test Time.cpp $(LLQSRC)/Queue.o $(LLQSRC)/Node.o


a_queue_test: Time.cpp $(AQSRC)/Queue.o
	$(CPP) $(CFLAGS) -o a_queue_test Time.cpp $(AQSRC)/Queue.o $(GTEST_MAINA)

clean:
	rm -f list_queue_test
	rm -f ll_queue_test
	rm -f a_queue_test
