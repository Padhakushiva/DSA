#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Stack{
    Node* head;
    int size;

public:
    Stack(){
        head=NULL;
        size=0;
    }

    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
        cout<<val<<" pushed successfully"<<endl;
    }

    void pop(){

        if(size==0){
            cout<<"Stack is already empty.";
        }
        else{
            head=head->next;
            size--;
            cout<<"Element popped successfully";
        }
    }

    void peek(){
        if(size==0){
            cout<<"Stack is empty.";
        }
        else{
            cout<<"Top Element is "<<head->data;
        }
    }
    
    void printstack(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.printstack();
}