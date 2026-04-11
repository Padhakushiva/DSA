#include<iostream>
using namespace std;
void max_value(int idx,int arr[],int n,int& m){
    if(idx==n){
        cout<<m;
        return;
    }
    if(arr[idx]>m){
        m=arr[idx];
    }
    max_value(idx+1,arr,n,m);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=INT_MIN;
    max_value(0,arr,n,m);
}
    