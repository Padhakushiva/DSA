#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"Here the original array : ";
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){    
        cout<<arr[i]<<" ";
    }
    
    // BUBBLE SORT 
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        bool flag=false;
        for (int j=0; j<n-1-i; j++){
            if(arr[j+1]>arr[j]){
                swap(arr[j], arr[j+1]);
                flag=true;
            }
        }
    }

    cout<<endl;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){    
        cout<<arr[i]<<" ";
    }
}