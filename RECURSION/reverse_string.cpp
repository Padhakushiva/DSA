#include<iostream>
using namespace std;

void reversestring(string s, int start, int end){
    if(start==end){
        return ;
    }
    swap(s[start+1],s[end]);

};  
int main(){
    string s="Class";
    int start=0;
    int lst=s.size()-1;
    reversestring(s,start,lst);
}