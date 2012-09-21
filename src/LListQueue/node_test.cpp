#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {

  Node* n = new Node(27);
  cout << n->getValue() << endl;
  Node* n2 = new Node(39);
  n->setNext(*n2);
  cout << n->getNext() << endl;
  //Node* address = n->getNext();
  //cout << address->getValue() << endl;
  cout << (n->getNext())->getValue() << endl;

  //cout << "Size is " << n ->size() << endl;
  //cout << "Is empty: " <<n->isEmpty() << endl;

  /*for (int i=0; i<10; i++) {
    //cout << i << endl;
    q->enqueue(i);
  }

  cout << "Size is " << q->size() << endl;
  cout << "Is empty: " <<q->isEmpty() << endl;

  for (int i=0; i<10; ++i) {
    cout << q->dequeue() << endl;
  }

  cout << "Is empty: " <<q->isEmpty() << endl;

  delete q;
  //next line is 'segmentation fault, proves it's deleted
  //cout << "Size is " << q->size() << endl;
*/
  return 0;
}
