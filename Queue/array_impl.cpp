#include <iostream>
using namespace std;

class Queue {
    int arr[5];     
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }


    bool isEmpty() {
        return (front == -1 || front > rear);
    }


    bool isFull() {
        return (rear == 4);
    }


    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }

        if (front == -1)  
            front = 0;

        rear++;
        arr[rear] = x;
    }


    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Removed: " << arr[front] << endl;
        front++;
    }


    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.peek();        
    q.dequeue();     
    q.peek();        
}