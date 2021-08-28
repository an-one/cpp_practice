#include "Queues.h"
void Queues::enqueue(int data)
{
    if (head == nullptr)
    {
        head = new Node();
        head->data = data;
        head->next = nullptr;
        head->prev = nullptr;
        tail = head;
    }
    else
    {
        Node *newNode = new Node();
        newNode->data = data;
        head->prev = newNode;
        newNode->next = head;
        newNode->prev = nullptr;
        head = newNode;
    }
}
int Queues::dequeue()
{
    if (head != tail)
    {
        tail = tail->prev;
        int ret = tail->next->data;
        delete tail->next;
        tail->next = nullptr;
    }else{
        if(head != nullptr){
            int ret = head->data;
            delete head;
            tail = nullptr;
            head = nullptr;
            return ret;
        }
        else{
            return -1;
        }
    }
}
bool Queues::empty(){
    if(head == nullptr){
        return true;
    }
    else return false;
}
