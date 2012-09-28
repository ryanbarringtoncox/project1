AQSRC = ../AQueue
LLQSRC = ../LListQueue
LQSRC = ../ListQueue
BUILD = ../../build

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/list_q_time a_queue_test ll_queue_test 

$(BUILD)/list_q_time: Time.cpp $(LQSRC)/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/list_q_time Time.cpp $(LQSRC)/Queue.o


ll_queue_test: Time.cpp $(LLQSRC)/Queue.o $(LLQSRC)/Node.o
	$(CPP) $(CFLAGS) -o ll_queue_test Time.cpp $(LLQSRC)/Queue.o $(LLQSRC)/Node.o


a_queue_test: Time.cpp $(AQSRC)/Queue.o
	$(CPP) $(CFLAGS) -o a_queue_test Time.cpp $(AQSRC)/Queue.o 

clean:
	rm -f list_queue_test
	rm -f ll_queue_test
	rm -f a_queue_test
