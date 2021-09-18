#include "BST.h"
void Bst::insertBST(int data){
    if(!isEmpty()){
        Node* temp = root;
        while(1){
           if(data>temp->data){
               if(temp->right != nullptr){
                   temp = temp->right;
               }else{
                   temp->right = new Node();
                   temp->right->data = data;
                   temp->right->right = nullptr;
                   temp->right->left = nullptr;
                   break;
               }
           }
           else{
               if(temp->left != nullptr){
                   temp = temp->left;
               }else{
                   temp->left = new Node();
                   temp->left->data = data;
                   temp->left->right = nullptr;
                   temp->left->left = nullptr;
                   break;
               }

           }
        }
    }else{
        root->data = data;
        root->left = nullptr;
        root->right = nullptr;
    }

}
bool Bst::isEmpty(){
    if(root == nullptr){
        return true;
    }else{
        return false;
    }
}