#pragma once
class Bst{
    public:
    class Node{
        public:
        int data;
        Node* left;
        Node* right;
    };
    Node* root = nullptr;
    
    
    bool isEmpty();
    void insertBST(int);

};