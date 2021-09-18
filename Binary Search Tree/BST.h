#pragma once
class Bst{
    class Node{
        public:
        int data;
        Node* left;
        Node* right;
    };
    Node* root = nullptr;
    public:
    bool isEmpty();
    void insertBST(int);

};