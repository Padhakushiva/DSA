#include<iostream>
using namespace std;
int main(){
    int col,rows;
    cout<<"Enter Rows: ";
    cin>>rows;
    cout<<"Enter Columns: ";
    cin>>col;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=col; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}