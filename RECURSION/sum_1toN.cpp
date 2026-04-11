#include<iostream>
using namespace std;

int printsum1toN(int n, int sum){
    if(n==0)return sum;
    sum+=n;
    return printsum1toN(n-1,sum);
}
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int sum=0;
    
    cout<<printsum1toN(n, sum);
}



 