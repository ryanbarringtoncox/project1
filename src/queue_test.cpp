#include "Queue.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {

  Queue* q = new Queue();

  cout << "Size is " << q->size() << endl;
  cout << "Is empty: " <<q->isEmpty() << endl;

  for (int i=0; i<10; i++) {
    //cout << i << endl;
    q->enqueue(i);
  }

  cout << "Size is " << q->size() << endl;
  cout << "Is empty: " <<q->isEmpty() << endl;

  for (int i=0; i<10; ++i) {
    cout << q->dequeue() << endl;
  }

  delete q;

  return 0;
}