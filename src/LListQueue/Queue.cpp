#include "Queue.h"
#include <iostream>

Queue::Queue() {
  theSize = 0;
}

void Queue::enqueue(int value) {
  if (theSize==0) {
    Node* n = new Node(value);
    front = n;
  }
  else {
    //Node* next = new Node(value);
    back = new Node(value);
  }
}

int Queue::dequeue() {
  return front->getValue();
}

int Queue::size() {
  return theSize;
}

int Queue::isEmpty() {
  return (theSize==0);
}

