#ifndef NODE_H
#define NODE_H

class Node
{
	protected:
		int load;
		Node *next;
	public:
		Node(int);
		Node();
		int getLoad();
		Node* getNext();
		void setLoad(int n);
		void setNext(Node* n);
};

#endif
