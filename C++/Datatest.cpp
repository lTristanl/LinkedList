#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include "LinkedList.h"
#include "LinkedList.cpp"

int main()
{
    LinkedList linkedList;
    linkedList.insertLast(30);
    linkedList.insertLast(10);
    linkedList.insertLast(5);
    linkedList.insertLast(12);
    linkedList.insertLast(25);
    linkedList.insertLast(250);
    linkedList.insertLast(500);
    linkedList.insertFirst(1);
    cout<<linkedList.isEmpty()<<endl;
    cout<<linkedList.search(12)<<endl;
    cout<<linkedList.search(2)<<endl;
    linkedList.toString();
    linkedList.clear();
    return 0;
}
