#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the CP: ";
    char c;
    cin>>c;
    if((((int)c>=97)&&((int)c<=122)) || (((int)c>=65)&&((int)c<=90))){
        cout<<"Yes This is Alphabet";
    }
    else{
        cout<<"This is not Alphabet";
    }
    
}