#pragma once
struct AS_array{
    int size = 0;
    int capacity = 10;
    int *arr;
};
AS_array *newArray(int newcapacity);
int size_of_ASarray(AS_array* a);
int capacity_of_ASarray(AS_array* a);
bool is_ASarray_empty(AS_array *a);
int at_ASarray(AS_array *a,int index);

