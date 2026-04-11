#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
    return; 
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<a<<","<<b;
    swap(&a,&b);
    cout<<endl;
       cout<<a<<","<<b;
}
