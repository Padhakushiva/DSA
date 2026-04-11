// PRINTING STACK 

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    stack<int> newstack;
    while(st.size()>0){
        newstack.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;


    while(newstack.size()>0){
        st.push(newstack.top());
        newstack.pop();
    }

    cout<<st.top()<<" ";

}

