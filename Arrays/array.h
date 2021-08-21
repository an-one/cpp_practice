#pragma once
class AS_array
{
public:
    int size = 0;
    int capacity = 10;
    int *arr;
    AS_array();
    int size_of_ASarray();
    int capacity_of_ASarray();
    bool is_ASarray_empty();
    int at_ASarray(int index);
    void push_ASarray(int data);
};
