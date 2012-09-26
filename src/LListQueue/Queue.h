#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "Node.h"

class Queue {
 private:
  Node* front;
  Node* back;
  int theSize;

 public:
  Queue();
  ~Queue(); //destructor
  void enqueue(int value);
  int dequeue();
  int isEmpty();
  int size();

};

#endif
