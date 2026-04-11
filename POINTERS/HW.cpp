// Q1. Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
void product(int *p, int *q){
    cout<<"Enter the First Number: ";
    cin>>*p;
    cout<<"Enter the Second Number: ";
    cin>>*q;

    cout<<(*p)*(*q);
}
int main(){
    int a,b;
    int *p=&a;
    int *q=&b;
    product(p,q);
}