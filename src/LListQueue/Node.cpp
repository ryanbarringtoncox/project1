#include "Node.h"
#include <iostream>

Node::Node(int val) {
  value = val;
  next=0;
}

Node::~Node() {
  //delete theQueue;
}
int Node::getValue() {
  return value;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node& n) {
  next = &n;
}