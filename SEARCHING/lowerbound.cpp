#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5,9,15,18};
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int low=0;
    int high=sizeof(arr)/sizeof(arr[0])-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(target>arr[mid]){
            low=mid+1;
        }
        else if(target<arr[mid]){
            high=mid-1;
        }
        else{
            
        }

    }  
} 
