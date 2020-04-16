#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
	first = NULL;
	back = NULL;
}

bool LinkedList::isEmpty(){
	return (first==NULL) ? true : false; // return 0 = False 1 = True
}

int LinkedList::extract(){
	if(isEmpty()){
		return -1;
	}else{
		Node *temp = first;
		int ourValue = first->getLoad();
		first = first->getNext();
		free(temp);
		return ourValue;
	}
}
void LinkedList :: insertFirst(int n){
	Node *temp = new Node();
	temp->setLoad(n);
	temp->setNext(first);
	first = temp;
}

void LinkedList::insertLast(int n){
	Node *node = new Node();
	node->setLoad(n);
	node->setNext(NULL);
	if(first==NULL){
		first = node;
		back = node;
	}else{
		back->setNext(node);
		back = node;
	}
}

void LinkedList::toString(){
	cout<<"[";
		Node *temp = first;
		while(temp!=NULL){
			if(temp->getNext()==NULL){
				std::cout<<temp->getLoad();
			}else{
				std::cout<<temp->getLoad();
				std::cout<<",";
			}
			temp = temp->getNext();
		}
	cout<<"]";
}

bool LinkedList::search(int n){
	if(isEmpty()){
		return false;
		cout<<"Sorry, buddy, it's empty";
	}
	else{
		Node *temp = first;
		while(temp!=NULL){
			if(temp->getLoad() == n)
				return true;
			else
				temp = temp->getNext();
		}
	}
	return false;
}

void LinkedList::clear(){
	do{
		extract();
	}while(first!=NULL);
}
