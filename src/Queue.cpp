#include "Queue.h"
#include <iostream>
#include <vector>

Queue::Queue() {
  theSize = 0;
  int initSize = 10;
  theQueue = new int[initSize];
  capacity = initSize;
}

Queue::~Queue() {
  delete[] theQueue;
}

void Queue::enqueue(int value) {
  theQueue[theSize] = value;
  theSize++;
}

int Queue::dequeue() {
  int temp = theQueue[theSize-1];
  theSize--;
  return temp;
}

int Queue::isEmpty() {
  if (theSize>0) return 0;
  else return 1;
}

int Queue::size() {
  return theSize;
}
