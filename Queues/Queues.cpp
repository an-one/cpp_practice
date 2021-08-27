#include "Queues.h"
void Queues::enqueue(int data)
{
    if (head == NULL)
    {
        head = new Node();
        head->data = data;
        head->next = NULL;
        tail = head;
    }
    else{
        Node* newNode = new Node();
        newNode->next = head;
        head = newNode;
    }
}
int Queues::dequeue() {}
