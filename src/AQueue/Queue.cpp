#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue() {
	theQueue = new int[10];
	front=0;
	theSize=0;
	capacity=10;
}

Queue::~Queue() {
	delete[] theQueue;
}

void Queue::enqueue(int value) {
	if (theSize==0) {
		theQueue[front]=value;
		back=front;	
		theSize++;
	}
	else {
		back=(back+1)%capacity;
		//back=back+1;
		theQueue[back]=value;
		theSize++;
	}
}

int Queue::dequeue() {
	assert(theSize>0);
	int temp = theQueue[front];
	front=(front+1)%capacity;
	//front=front+1;
	theSize--;
	return temp;
}

int Queue::isEmpty() {
	return (theSize==0);
}

int Queue::size() {
	return theSize;
}
