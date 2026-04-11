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

class Queue{
    Node* front;
    Node* rear;
public:
    Queue(){
        front=rear=NULL;
    }

    void enqueue(int val){
        Node* temp=new Node(val);
        if(rear==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;

        cout<<"Element pushed successfully with value "<<val;
    }

    void dequeue(){
        if(rear==NULL){
            cout<<"Queue is empty";
        }
        Node* temp = front;
        front = front->next;

        if (front == NULL)  // If queue becomes empty
            rear = NULL;

        delete temp;
    }

    void printqueue(){
        if(rear==NULL){
            cout<<"Queue is empty";
        }
        Node* head=front;
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
    
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.printqueue();
}