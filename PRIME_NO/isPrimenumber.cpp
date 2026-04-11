#include<iostream>
using namespace std;
void isPrime(int n){
    if(n==1) cout<<"false";
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"false";
            return;
        }
    }
    cout<<"True";
    return;
    
    
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    isPrime(n);
}