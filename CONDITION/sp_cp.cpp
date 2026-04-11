#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the CP: ";
    int cp;
    cin>>cp;
    cout<<"Enter the sp: ";
    int sp;
    cin>>sp;

    if(sp-cp>0){
        cout<<"Profit of "<<sp-cp<<" rs";
    }
    else if(sp-cp==0){
         cout<<"No profit No Loss";
    }
    else{
        cout<<"Loss of "<<cp-sp<<" rs";
    }
}