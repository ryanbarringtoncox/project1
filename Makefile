TIMESRC = ./src/time
AQSRC = ./src/AQueue
LLQSRC = ./src/LListQueue
LQSRC = ./src/ListQueue
BUILD = ./build
TEST = ./test
LIB = ./lib

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(LQSRC)/Queue.o $(AQSRC)/Queue.o $(LLQSRC)/Queue.o $(LLQSRC)/Node.o $(BUILD)/li_q_time $(BUILD)/a_q_time $(BUILD)/ll_q_time

$(LQSRC)/Queue.o: $(LQSRC)/Queue.h $(LQSRC)/Queue.cpp
	cd $(LQSRC); $(MAKE)

$(AQSRC)/Queue.o: $(AQSRC)/Queue.h $(AQSRC)/Queue.cpp
	cd $(AQSRC); $(MAKE)

$(LLQSRC)/Queue.o: $(LLQSRC)/Queue.h $(LLQSRC)/Queue.cpp
	cd $(LLQSRC); $(MAKE)

$(BUILD)/li_q_time: $(TIMESRC)/Time.cpp $(LQSRC)/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/li_q_time $(TIMESRC)/Time.cpp $(LQSRC)/Queue.o

$(BUILD)/ll_q_time: $(TIMESRC)/Time.cpp $(LLQSRC)/Queue.o $(LLQSRC)/Node.o
	$(CPP) $(CFLAGS) -o $(BUILD)/ll_q_time $(TIMESRC)/Time.cpp $(LLQSRC)/Queue.o $(LLQSRC)/Node.o

$(BUILD)/a_q_time: $(TIMESRC)/Time.cpp $(AQSRC)/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/a_q_time $(TIMESRC)/Time.cpp $(AQSRC)/Queue.o 	

clean:
	cd $(LQSRC); $(MAKE) clean
	cd $(AQSRC); $(MAKE) clean
	cd $(LLQSRC); $(MAKE) clean	
	cd $(TEST); $(MAKE) clean
	cd $(TIMESRC); $(MAKE) clean
