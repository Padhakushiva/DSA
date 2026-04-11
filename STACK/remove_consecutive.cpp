#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="aaabbcddaaffg";
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(st.empty() || s[i]!=st.top()){
            st.push(s[i]);
        }
    }

    while(st.size()>0){
        cout<<st.top();
        st.pop();
    }
}