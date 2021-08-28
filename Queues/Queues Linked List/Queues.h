#pragma once

class Queues{
    private:
    class Node{
        public:
        int data;
        Node* next;
        Node* prev;
    };
    public:
    Node* head = nullptr;
    Node* tail = nullptr;
    void enqueue(int data);
    int dequeue();
    bool empty();


};