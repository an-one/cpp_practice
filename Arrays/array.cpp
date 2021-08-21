#include<iostream>
#include "array.h"
AS_array *newArray(int newcapacity)
{
    AS_array *a = new AS_array();
    a->capacity = newcapacity;
    a->size = 0;
    a->arr = new int[newcapacity];
    return a;
}
int size_of_ASarray(AS_array *a)
{
    return a->size;
}
int capacity_of_ASarray(AS_array *a)
{
    return a->capacity;
}
bool is_ASarray_empty(AS_array *a)
{
    if (a->size)
        return true;
    else
        return false;
}
int at_ASarray(AS_array *a,int index){
    if(a->size == 0){
        std::cout<<"ERROR : Array empty.\n";
        return -1;
    }
    if(index+1>a->size || index < 0){
        std::cout<<"ERROR : Index out of range.\n";
        return -1;
    }
    return a->arr[index];
}