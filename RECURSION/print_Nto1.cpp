#include<iostream>
using namespace std;
void printnumbers(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    return printnumbers(n-1);
}
int main(){
    int n;
    cout<<"Enter the lst Number : ";
    cin>>n;
    printnumbers(n);
}