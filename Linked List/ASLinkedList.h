#pragma once
class Node{
    public:
    Node* head;
    int data;
    Node* next;
    int size = 0;
    int sizeList();
};