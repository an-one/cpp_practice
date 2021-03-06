#include "ASLinkedList.h"
int LinkedList::size()
{
    return sizee;
}
bool LinkedList::isEmpty()

{
    if (Head == nullptr)
        return true;
    return false;
}
int LinkedList::value_at(int n)
{
    if (Head == nullptr)
    {
        //cout << "ERROR : The array is not having any element.\n";
        return -1;
    }
    if (size() - 1 < n)
    {

        //cout << "ERROR : Index out of bounds.\n";
        return -1;
    }
    Node *temp = Head;
    while (n != 0)
    {
        temp = temp->next;
        n--;
    }
    return temp->data;
}
void LinkedList::push_front(int n)
{
    Node *newNode = new Node();
    newNode->data = n;
    if (Head == nullptr)
    {
        Head = newNode;
        Head->next = nullptr;
        sizee++;
    }
    else
    {
        newNode->next = Head;
        Head = newNode;
        sizee++;
    }
}
int LinkedList::pop_front()
{
    Node *temp = Head;
    
    if (Head == nullptr)
    {
        //cout << "ERROR : The list is empty.\n";
        return -1;
    }
    else
    {   
        delete Head;
        Head = temp->next;
        sizee--;
        return temp->data;

    }
}
void LinkedList::push_back(int n)
{
    Node *newNode = new Node();
    newNode->data = n;
    newNode->next = nullptr;
    if (Head == nullptr)
    {
        Head = newNode;
        sizee++;
    }
    else
    {
        Node *temp = Head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        sizee++;
    }
}
int LinkedList::pop_back()
{
    Node *temp = Head;
    int data;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    data = temp->next->data;
    delete temp->next;
    sizee--;
    temp->next = nullptr;
    return data;
}
int LinkedList::front()
{
    if (Head == nullptr)
    {
       // cout << "ERROR : The linked list is empty.\n";
        return -1;
    }
    else
        return Head->data;
}
int LinkedList::back()
{
    if (Head == nullptr)
    {
        //cout << "ERROR : The linked list is empty.\n";
        return -1;
    }
    else
    {
        Node *temp = Head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        return temp->data;
    }
}
void LinkedList::insert(int index, int value)
{
    if (sizee = 0 || index > sizee - 1)
    {
       // cout << "ERROR : The index value out of bounds.\n";
    }
    if (index == 0)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = Head;
        Head = newNode;
        sizee++;
    }
    else
    {
        Node *newNode = new Node();
        newNode->data = value;
        Node *temp = Head;
        for (int i = 0; i != index - 1; i++)
        {
            temp = temp->next;
        }
        sizee++;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void LinkedList::erase(int index)
{
    if (sizee = 0 || index > sizee - 1)
    {
        //cout << "ERROR : The index value out of bounds.\n";
    }
    if (index == 0)
    {   Node* temp = Head;
        Head = Head->next;
        delete temp;
        sizee--;
    }
    else
    {
        Node *temp = Head;
        for (int i = 0; i != index - 1; i++)
        {
            temp = temp->next;
        }
        Node *t = temp->next;
        temp->next = temp->next->next;
        delete t;
    }
}
int LinkedList::value_n_from_end(int n)
{
    int sizee = size();

    if (sizee == 0 || n > sizee - 1 || n < 0)
    {
       // cout << "ERROR : The index value out of bounds.\n";
        return -1;
    }

    n = sizee - 1 - n;

    Node *temp = Head;
    while (n != 0)
    {
        temp = temp->next;
        n--;
    }
    return temp->data;
}
void LinkedList::reverse()
{
    if (Head == nullptr)
    {
        //cout << "ERROR : The list in empty.\n";
    }
    else
    {
        Node *temp = Head, *toBeReversed = Head, *alreadyReversed = nullptr;
        int s = size();
        for (int i = 0; i < s; i++)
        {
            toBeReversed = temp->next;
            temp->next = alreadyReversed;
            alreadyReversed = temp;
            temp = toBeReversed;
        }
        Head = alreadyReversed;
    }
}
