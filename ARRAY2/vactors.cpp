#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    int x=2;
    cout<<"Enter the elements of Vector: ";
    for(int i=0; i<v.size(); i++){
        cin>>v[i];

    }   

    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
    }

}