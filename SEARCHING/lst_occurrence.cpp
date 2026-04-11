#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int target=4;
    int low=0, high=sizeof(arr)/sizeof(arr[0])-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<target){
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            if(arr[mid+1]==target){
                low=mid+1;
            }
            else{
                cout<<high;
                break;
            }
        }
    }
   
}