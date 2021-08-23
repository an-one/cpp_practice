#include <iostream>
#include "array.h"
AS_array::AS_array()
{
    //constructor which initializes the array to size = 10
    arr = new int[10];
}
int AS_array::sizeArray()
{
    //return size = no of element in the array
    return size;
}
int AS_array::capacityArray()
{
    //returns the maximum numbers elements that can be storedd in the array
    return capacity;
}
bool AS_array::isEmpty()
{
    //returns true if array is empty if not empty return false
    if (!size)
        return true;
    else
        return false;
}
int AS_array::at(int index)
{
    //if size is equale to 0 then error
    if (size == 0)
    {
        std::cout << "ERROR : Array empty.\n";
        return -1;
    }
    //if index >size or size <0 then error
    if (index + 1 > size || index < 0)
    {
        std::cout << "ERROR : Index out of range.\n";
        return -1;
    }
    return arr[index];
}
void AS_array::resize(int change)
{
    if (change < 0)
    {
        if (size < (capacity / 2))
        { 
            int *temparr = new int[capacity / 2];
            for (int i = 0; i < size; i++)
            {
                temparr[i] = arr[i];
            }
            delete arr;
            arr = temparr;
            capacity /= 2;
        }
    }
    if (change > 0)
    {
        if (size == capacity - 2)
        {   
            int *temparr = new int[capacity * 2];
            for (int i = 0; i < size; i++)
            {
                temparr[i] = arr[i];
            }
            delete arr;
            arr = temparr;
            capacity *= 2;
        }
    }
}
void AS_array::push(int data)
{
    resize(1);
    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = data;
    size++;
}
void AS_array::insert(int index, int data)
{
    if (size == 0 && index != 0)
    {
        std::cout << "ERROR : Array empty.\n";
    }
    //if index >size or size <0 then error
    else if (index > size || index < 0)
    {
        std::cout << "ERROR : Index out of range.\n";
    }
    else
    {
        resize(1);
        for (int i = size; i >= index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = data;
        size++;
    }
}
int AS_array::pop()
{   
    int ret = arr[size - 1];
    size--;
    resize(-1);
    return ret;
    ;
}
void AS_array::deleteIndex(int index)
{
    if (size == 0 && index != 0)
    {
        std::cout << "ERROR : Array empty.\n";
    }
    //if index >size or size <0 then error
    else if (index + 1 > size || index < 0)
    {
        std::cout << "ERROR : Index out of range.\n";
    }
    else
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        resize(-1);
    }
}
void AS_array::removeItem(int item)
{
    for (int ij = 0; ij < size; ij++)
    {
        if (arr[ij] == item)
        {
            deleteIndex(ij);
        }
    }
}
int AS_array::find(int val)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}
