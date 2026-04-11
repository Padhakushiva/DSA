#include<iostream>
using namespace std;
int main(){
    int col;
    cout<<"Enter Columns: ";
    cin>>col;
    int mid=col/2+1;
    for(int i=1; i<=col; i++){
        if(i==mid){
            for(int j=1; j<=col; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int j=1; j<=col; j++){
                if(j==mid){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }

    }
}