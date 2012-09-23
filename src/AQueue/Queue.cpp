#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue() {
	capacity=5;
	theQueue = new int[capacity];
	front=0;
	theSize=0;
	
}

Queue::~Queue() {
	delete[] theQueue;
}

int Queue::dequeue() {
	assert(theSize>0);
	int temp = theQueue[front];
	front=(front+1)%capacity;
	//front=front+1;
	theSize--;
	return temp;
}

void Queue::enqueue(int value) {
	if (theSize==0) {
		theQueue[front]=value;
		back=front;	
		theSize++;
	}
	else {
		if (theSize==capacity) {
			capacity=capacity*2;
			int* tempArray = new int[capacity];
			for (int i=0; i<theSize; ++i) {
				//can't call dequeue within enqueue?
				//theQueue->dequeue();
				int temp = theQueue[front];
				front=(front+1)%capacity;
				//front=front+1;
				theSize--;
				tempArray[i] = temp;
			}
			theQueue=tempArray;
			delete[] tempArray;
		}
		 //theSize=capacity/2;

		back=(back+1)%capacity;
		theQueue[back]=value;
		
		theSize++;
	}
}

int Queue::isEmpty() {
	return (theSize==0);
}

int Queue::size() {
	return theSize;
}

int Queue::getCapacity() {
	return capacity;
}
