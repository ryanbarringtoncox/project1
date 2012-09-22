#include "Queue.h"
#include <iostream>
#include <assert.h>

Queue::Queue() {
  theSize = 0;
}

void Queue::enqueue(int value) {
  if (theSize==0) {
    Node* n = new Node(value);
	  //n->setNext(NULL);
    front = n;
	theSize++;
  }
  else if (theSize==1) {
	  back = new Node(value);
	  front->setNext(*back);  
	  theSize++;
  }
  else {
	  Node* n = new Node(value);
	  back->setNext(*n);
	  back=n;
	  theSize++;
  }
}

int Queue::dequeue() {
	assert(theSize>0);
	Node* temp = front;
	front=front->getNext();
	theSize--;
	return temp->getValue();
}

int Queue::size() {
  return theSize;
}

int Queue::isEmpty() {
  return (theSize==0);
}

