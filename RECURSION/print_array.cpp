#include<iostream>
using namespace std;
void print_array(int arr[],int size,int idx){
    if(idx==size){
        return;
    }
    cout<<arr[idx]<<" ";
    print_array(arr,size,idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    print_array(arr,size,0);
}