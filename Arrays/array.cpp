#include <iostream>
#include "array.h"
AS_array::AS_array()
{
    arr = new int[10];
}
int AS_array::size_of_ASarray()
{
    return size;
}
int AS_array::capacity_of_ASarray()
{
    return capacity;
}
bool AS_array::is_ASarray_empty()
{
    if (size)
        return true;
    else
        return false;
}
int AS_array::at_ASarray(int index)
{
    if (size == 0)
    {
        std::cout << "ERROR : Array empty.\n";
        return -1;
    }
    if (index + 1 > size || index < 0)
    {
        std::cout << "ERROR : Index out of range.\n";
        return -1;
    }
    return arr[index];
}
void AS_array::push_ASarray(int data)
{
    
}