#include"array.h"
AS_array *newArray(int newcapacity){
    AS_array* a = new AS_array();
    a->capacity = newcapacity;
    a->size = 0;
    a->arr = new int[newcapacity];
    return a;
}