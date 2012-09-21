#include "Node.h"
#include <iostream>

Node::Node(int val) {
  //does this work?
  value = val;
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