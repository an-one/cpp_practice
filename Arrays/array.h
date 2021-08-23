#pragma once
class AS_array
{
public:
    
    AS_array();
    int sizeArray();
    int capacityArray();
    bool isEmpty();
    int at(int index);
    void push(int data);   
    void insert(int index,int data); 
    int pop();
    void deleteIndex(int index);
    void removeItem(int item);
    int find(int val);
    //private:
    void resize(int change);
    int size = 0;
    int capacity = 10;
    int *arr;

};
