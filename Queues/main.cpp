#include<iostream>
#include"Queues.h"
#include"Queues.cpp"
using namespace std;
int main(){
    Queues a;
    cout<<a.empty()<<endl;
    a.enqueue(123);
    cout<<a.empty()<<endl;
    cout<<a.dequeue()<<endl;
    cout<<a.empty()<<endl;
    return 0;
}