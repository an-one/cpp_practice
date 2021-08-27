#pragma once
#include"ASLinkedList.h"
class Queues
{
private:
   LinkedList q;
public:
   void enqueue(int data);
   int dequeue();
   bool empty();
};