#include "BST.h"
#include<iostream>
void Bst::insertBST(int data){
    Node* newNode = new Node();
    newNode->data =data;
    newNode->left = nullptr;
    newNode->right = nullptr; 
    Node* temp = root;
    if(!isEmpty()){
        while(1){
           if(data>temp->data){
               if(temp->right != nullptr){
                   std::cout<<"goin right\n";
                   temp = temp->right;
               }else{
                   temp->right = newNode;  
                   std::cout<<"goin new node right\n";                 
                   break;
               }
           }
           else{
               if(temp->left != nullptr){
                   temp = temp->left;
                   std::cout<<"goin left\n";
               }else{
                   temp->left = newNode;
                   std::cout<<"goin new node left\n";      
                   break;
               }

           }
        }
    }else{
        std::cout<<"First Node\n";
        root = newNode;
        
        
        
    }

}
bool Bst::isEmpty(){
    if(root == nullptr){
        return true;
    }else{
        return false;
    }
}