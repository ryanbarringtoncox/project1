AQSRC = ../AQueue
LLQSRC = ../LListQueue
LQSRC = ../ListQueue
BUILD = ../../build

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/li_q_time $(BUILD)/a_q_time $(BUILD)/ll_q_time 

$(BUILD)/li_q_time: Time.cpp $(LQSRC)/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/li_q_time Time.cpp $(LQSRC)/Queue.o


$(BUILD)/ll_q_time: Time.cpp $(LLQSRC)/Queue.o $(LLQSRC)/Node.o
	$(CPP) $(CFLAGS) -o $(BUILD)/ll_q_time Time.cpp $(LLQSRC)/Queue.o $(LLQSRC)/Node.o


$(BUILD)/a_q_time: Time.cpp $(AQSRC)/Queue.o
	$(CPP) $(CFLAGS) -o $(BUILD)/a_q_time Time.cpp $(AQSRC)/Queue.o 

clean:
	rm -f $(BUILD)/a_q_time 
	rm -f $(BUILD)/li_q_time
	rm -f $(BUILD)/ll_q_time
