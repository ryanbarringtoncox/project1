#include "Queue.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {

  Queue* q = new Queue();

  //cout << "Size is: " << q->size() << endl;
  //cout << "Is empty: " <<q->isEmpty() << endl;
  //cout << "Capacity is: " << q->getCapacity() << endl;
  //cout << "Add 0-4..." << endl;

  for (int i=0; i<25; i++) {
	  //cout << "Enqueueing " << i << endl;
	  q->enqueue(i);
	  //cout << "Size is: " << q->size() << endl;
	  //cout << "Capacity is: " << q->getCapacity() << endl;
  }
	//cout << "dequeue: " << q->dequeue() << endl;
	//cout << "Size is: " << q->size() << endl;
	//cout << "dequeue: " << q->dequeue() << endl;
	//cout << "Size is: " << q->size() << endl;
	
	/*for (int i=0; i<8; i++) {
		//cout << "Enqueueing " << i << endl;
		q->enqueue(i);
		//cout << "Size is: " << q->size() << endl;
		//cout << "Capacity is: " << q->getCapacity() << endl;
	}	*/
	
	//cout << "Size is: " << q->size() << endl;
	
	while (!q->isEmpty()) {
		cout << "dequeue: " << q->dequeue() << endl;
		//cout << "Size is: " << q->size() << endl;
		//cout << "Capacity is: " << q->getCapacity() << endl;
		
	}
	//cout << "Capacity is: " << q->getCapacity() << endl;
	cout << "Size is: " << q->size() << endl;


  delete q;

  return 0;
}
