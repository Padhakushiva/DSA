#include<iostream>
using namespace std;
class Stack{
    int arr[6];
    int idx=-1;
public:
    void push(int val){
        idx++;
        arr[idx]=val;
        cout<<val<<" pushed successfully";
    }

    void pop(){
        idx--;
        cout<<"Element popped successfully";
    }

    void top(){
        cout<<"Top element of stack is : "<<arr[idx];
    }

    void printstack(){
        for(int i=idx; i>=0; i--){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.printstack();
}

