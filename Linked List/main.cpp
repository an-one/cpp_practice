#include<iostream>
#include"ASLinkedList.h"
#include"ASLinkedList.cpp"
using namespace std;
int main(){
    LinkedList a;
    a.push_front(123);
    a.push_front(12);
    a.push_front(16);
    
    cout<<"front()  "<<a.front()<<endl;
    cout<<"back()  "<<a.back()<<endl;
    cout<<"size()  "<<a.size()<<endl;
    cout<<"isEmpty()  "<<a.isEmpty()<<endl;
    cout<<"valueat()  "<<a.value_at(2)<<endl;

}