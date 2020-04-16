#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
#include "Node.cpp"
#include <iostream>

class LinkedList
{
	protected:
		Node* first;
		Node* back;
	public:
		DoublyLinkedList();
		bool isEmpty();
		void insertFirst(int n);
		void insertLast(int n);
		int extract();
		void toString();
		bool search(int a);
		void clear();
};

#endif
