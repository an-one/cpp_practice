#include<iostream>
#include"array.h"
#include"array.cpp"


using namespace std;
int main(){
    AS_array* arr = newArray(10);
    cout<<at_ASarray(arr,0);
    return 0;
}