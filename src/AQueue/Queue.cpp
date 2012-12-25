#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue() {
	capacity=5;
	theQueue = new int[capacity];
	front=0;
	back=0;
	theSize=0;	
}

Queue::~Queue() {
	delete[] theQueue;
}

int Queue::dequeue() {
	assert(theSize > 0);	
	if (theSize < capacity/2) {
		int* tempArray = new int[capacity / 2];
		int* oldArray = theQueue;	
		for (int i=0; i<theSize; ++i) {
			tempArray[i] = theQueue[front%capacity];
			front++;
		}
		theQueue = tempArray;
		delete[] oldArray;
		front = 0;
		back = theSize;
		capacity = capacity / 2;
	}
	int temp = theQueue[front];
	front = (front + 1)%capacity;
	theSize--;
	return temp;
}

void Queue::enqueue(int value) {
	if (theSize >= capacity) {
		int* tempArray = new int[capacity * 2];
		int* oldArray = theQueue;
		for (int i=0; i<theSize; ++i) {
				tempArray[i] = theQueue[front%capacity];
				front++;
		}		
		theQueue = tempArray;
		delete[] oldArray;
		front = 0;
		back = theSize;
		capacity *= 2;
	}  
	theQueue[back] = value;
	back = (back+1)%capacity;
	theSize++;
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
