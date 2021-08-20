#pragma once
struct AS_array{
    int size = 0;
    int capacity = 10;
    int *arr;
};
AS_array *newArray(int newcapacity);



