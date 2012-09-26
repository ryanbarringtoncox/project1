#include "Queue.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {

  Queue* q = new Queue();
	
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Size is: " << q->size() << endl;
	
	cout << "Enqueueing 0-4..." << endl;
	for (int i=0; i<5; i++) {
		q->enqueue(i);
	}
	
	cout << "dequeue: " << q->dequeue() << endl;
	cout << "dequeue: " << q->dequeue() << endl;	
	
	cout << "Enqueueing 0-4..." << endl;
	for (int i=0; i<5; i++) {
		q->enqueue(i);
	}
	
	while (!q->isEmpty()) {
		cout << "dequeue: " << q->dequeue() << endl;		
	}
  
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Size is: " << q->size() << endl;
  /*

  for (int i=0; i<5; i++) {
	  //cout << "Enqueueing " << i << endl;
	  q->enqueue(i);
	  //cout << "Size is: " << q->size() << endl;
  }
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Adding 0-10..." << endl;
	for (int i=0; i<11; i++) {
		//cout << "Enqueueing " << i << endl;
		q->enqueue(i);
		//cout << "Size is: " << q->size() << endl;
	}	
	cout << "Capacity is: " << q->getCapacity() << endl;	
	cout << "dequeue: " << q->dequeue() << endl;
	cout << "Size is: " << q->size() << endl;
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Adding 100-111..." << endl;

	for (int i=100; i<111; i++) {
		q->enqueue(i);
	}
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Dequeueing every-TING" << endl;
	while (!q->isEmpty()) {
		cout << "dequeue: " << q->dequeue() << endl;		
	}
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Size is: " << q->size() << endl;
	
	cout << "Adding 0-10 again..." << endl;
	for (int i=0; i<11; i++) {
		q->enqueue(i);
	}
	
	while (!q->isEmpty()) {
		cout << "dequeue: " << q->dequeue() << endl;		
	}*/


  delete q;

  return 0;
}
