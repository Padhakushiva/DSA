#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element of stack is : " << s.top() << endl;
    cout << "Element of stack is popped : " << s.top() << endl;
    s.pop();
    cout << "New top element is : " << s.top() << endl;
    return 0;
}