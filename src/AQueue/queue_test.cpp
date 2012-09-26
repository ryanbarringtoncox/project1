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
	
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Size is: " << q->size() << endl;
	
	cout << "dequeue: " << q->dequeue() << endl;
	cout << "dequeue: " << q->dequeue() << endl;	
	
	cout << "Enqueueing 0-4..." << endl;
	for (int i=0; i<5; i++) {
		q->enqueue(i);
	}
	
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Size is: " << q->size() << endl;
	
	while (!q->isEmpty()) {
		cout << "dequeue: " << q->dequeue() << endl;		
	}
  
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Size is: " << q->size() << endl;

	cout << "Enqueueing 0-20..." << endl;
	for (int i=0; i<21; i++) {
		q->enqueue(i);
	}
	
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Size is: " << q->size() << endl;
	
	cout << "Dequeueing 0-10..." << endl;
	for (int i=0; i<12; i++) {
		cout << "dequeue: " << q->dequeue() << endl;
	}
	
	cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Size is: " << q->size() << endl;
	
    delete q;

    return 0;
}
