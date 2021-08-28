#pragma once
class LinkedList{
    private:
	class Node {
	public:
		int data;
		Node* next;
	};
    public:
    Node* Head = nullptr;
    int sizee = 0;
    int size();
    bool isEmpty();
    int value_at(int n);
    void push_front(int n);
    int pop_front();
    void push_back(int n);
    int pop_back();
    int front();
    int back();
    void insert(int index, int value);
    void erase(int index);
    int  value_n_from_end(int n);
    void reverse();
};