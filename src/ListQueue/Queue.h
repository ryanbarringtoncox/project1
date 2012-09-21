#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <list>
using namespace std;

class Queue {
 private:
  list<int> theQueue;

 public:
  Queue();
  ~Queue(); //destructor
  void enqueue(int value);
  int dequeue();
  int isEmpty();
  int size();

};

#endif