#include "Queue.h"
#include <iostream>
#include <vector>

Queue::Queue() {
  //um, need there be something here?
}

Queue::~Queue() {
  //delete theQueue;
}

void Queue::enqueue(int value) {
  theQueue.push_back(value);
}

int Queue::dequeue() {
  int temp = theQueue.front();
  theQueue.pop_front();
  return temp;
}

int Queue::isEmpty() {
  if (theQueue.size()>0) return 0;
  else return 1;
}

int Queue::size() {
  return theQueue.size();
}
