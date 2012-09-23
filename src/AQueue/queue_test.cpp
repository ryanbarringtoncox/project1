#include "Queue.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {

  Queue* q = new Queue();

  cout << "Size is: " << q->size() << endl;
  cout << "Is empty: " <<q->isEmpty() << endl;

  for (int i=0; i<8; i++) {
    //cout << i << endl;
    q->enqueue(i);
  }
	
	cout << "Size is: " << q->size() << endl;
	cout << "Is empty: " <<q->isEmpty() << endl;
	
	while (!q->isEmpty()) {
		cout << "dequeue: " << q->dequeue() << endl;
		
	}

	cout << "Yo yo..." << endl;

  delete q;

  return 0;
}
