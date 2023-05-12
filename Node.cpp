#include "Node.h"
#include <iostream>

Node::Node(int data) {
	this->data = data;
	leftChild = 0;
	rightChild = 0;
}

void Node::Display() {
	std::cout << this->data << std::endl;
}