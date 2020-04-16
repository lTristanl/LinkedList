#include "Node.h"
Node::Node(){
	load = 0;
	next = NULL;
}

Node::Node(int n){
	load = n;
	next = NULL;
}

int Node::getLoad(){
	return load;
}

Node* Node::getNext(){
	return next;
}

void Node::setLoad(int n){
	load = n;
}

void Node::setNext(Node* n){
	next = n;
}
