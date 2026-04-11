#include<iostream>
using namespace std;

int  findfirstoccurrence(int n,int arr[]){

    int low=0, high=n-1;
    int target;
    int ans=-1;
    cout<<"Enter the target: ";
    cin>>target;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<target){
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            ans=mid;
            high=high-1;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,2,3,3,3,3,4,4,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findfirstoccurrence(n,arr);
}