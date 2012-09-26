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
	theSize--;	
	//if theSize is less than half capacity, reduce Queue by half
	/*if (theSize<capacity/2) {
		capacity=capacity/2;
		int* temp = new int[capacity];
		for (int i=0; i<theSize; ++i) {
			temp[i]=theQueue[front];
			front++;
		}
		front=0;
		delete[] theQueue;
		theQueue = temp;
	}	*/
	return temp;
}

void Queue::enqueue(int value) {
	if (theSize==0) {
		theQueue[front]=value;
		back=front;	
		theSize++;
	}
	else {		
		if (theSize < capacity) {
			back=(back+1)%capacity;
			theQueue[back]=value;			
			theSize++;
		}		
		else {
			int prevCapacity=capacity;
			capacity=capacity*2;
			int* tempArray = new int[capacity];
			for (int i=0; i<theSize; ++i) {
				//int temp=this->dequeue();
				int temp = theQueue[front];
				tempArray[i] = temp;
				front=(front+1)%prevCapacity;
			}
			//the order of these next two lines is CRUCIAL!  had em swapped before
			delete[] theQueue;
			theQueue=tempArray;
			back=theSize;
			theQueue[back]=value;
			theSize++;
			front=0;
		}
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
