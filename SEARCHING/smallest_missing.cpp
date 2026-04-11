#include<iostream>
#include<vector>
using namespace std;
int findsmallestmissing( vector<int>&arr){
    int diff=arr[0]-0;
    int idx=-1;
    for(int i=0; i<arr.size(); i++){
        int diff2=arr[i]-i;
        if(diff2!=diff){
            idx=arr[i-1]+1;
            break;
        }
    }
    return idx;
}
int main(){
    vector<int> arr={0,2,3,8,9,12};
    cout<<findsmallestmissing(arr);
}