#pragma once
class Bst{
    class Node{
        public:
        int data;
        Node* left;
        Node* right;
    };
    Node* root = NULL;
    public:
    bool isEmpty();
    void insertBST(int);

};