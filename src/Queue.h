#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <vector>

class Queue {
 private:
  int* theQueue;
  int front;
  int back;
  int theSize;
  int capacity;

 public:
  Queue();
  ~Queue(); //destructor
  void enqueue(int value);
  int dequeue();
  int isEmpty();
  int size();

};

#endif