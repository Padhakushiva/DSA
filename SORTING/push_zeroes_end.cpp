#include<iostream>
using namespace std;
void pushzeroestoend(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,0,1,2,0,0,4,0,3};
    int s=sizeof(arr)/sizeof(arr[0]);
    
    pushzeroestoend(arr, s);
}
