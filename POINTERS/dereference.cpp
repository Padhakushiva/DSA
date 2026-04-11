#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    int *p=&x, *q=&y;

    cout<<(*p)+(*q);
}