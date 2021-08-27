#pragma once
class Queues{
    private:
    class Node{
        public:
        int data;
        Node* next;
    };
    public:
    Node* head = NULL;
    Node* tail = NULL;
    void enqueue(int data);
    int dequeue();


};