#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int s;
    cout<<"Enter the size of array : ";
    cin>>s;

    int x;
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<s; i++){
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<s; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> newv(s);
    int idx=0;
    for(int i=v.size()-1; i>=0; i--){
        newv[idx]=v[i];
        cout<<newv[idx];
        idx++;
    }
    
}