#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(int x: s){
        cout<<x<<" ";
    }
    cout<<endl;

    int target=5;
    if(s.find(target)!=s.end()){
        cout<<"This element Exists";
    }
    else{
        cout<<"Not exists";
    }

}