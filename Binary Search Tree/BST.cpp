#include "BST.h"
void Bst::insertBST(int data){
    if(!isEmpty()){
        Node* temp = root;
        while(1){
           if(data>temp->data){
               if(temp->right != NULL){
                   temp = temp->right;
               }else{
                   temp->right = new Node();
                   temp->right->data = data;
                   temp->right->right = NULL;
                   temp->right->left = NULL;
                   break;
               }
           }
           else{
               if(temp->left != NULL){
                   temp = temp->left;
               }else{
                   temp->left = new Node();
                   temp->left->data = data;
                   temp->left->right = NULL;
                   temp->left->left = NULL;
                   break;
               }

           }
        }
    }else{
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }

}
bool Bst::isEmpty(){
    if(root == NULL){
        return true;
    }else{
        return false;
    }
}