// #include <iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={7,1,2,5,8,4,9,3,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=3;
//     int prevsum=-1;
//     int currentsum=-1;
//     int maxsum=0;
//     int sum=0;
//     for(int i=0; i<k; i++){
//         sum+=arr[i];
//     }
//     prevsum=sum;
//     int i=1;
//     int j=k;
//     while(j<n){
//         int currentsum=prevsum+arr[j]-arr[i-1];
//         if(currentsum>maxsum){
//             maxsum=currentsum;
//         }
//         i++;
//         j++;
//         prevsum=currentsum;
//     } 
//     cout<<maxsum; 
// }






#include <iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int prevsum=-1;
    int currentsum=-1;
    int maxsum=-1;
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=arr[i];
    }
    prevsum=sum;
    int i=1, j=k;
    while(j<n){
        int currentsum=prevsum+arr[j]-arr[i-1];
        if(currentsum>maxsum){
            maxsum=currentsum;
        }
        i++;
        j++;
        prevsum=currentsum;
    }
    cout<<maxsum;

}