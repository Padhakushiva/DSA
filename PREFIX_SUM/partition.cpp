#include<iostream>
using namespace std;

int prefix_sum(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=arr[i];
    }
    if(ans%2!=0){
        return -1;
    }
    else{
        int ans2=0;
        for(int i=0; i<=n-1; i++){
            ans2+=arr[i];
            if(ans2*2==ans){
                return i;
            }
        }
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<(prefix_sum(arr,n));
}