// #include<iostream>
// #include<climits>
// using namespace std;

// void selectionsort(int arr[], int n){
    
//     for(int i=0; i<n-1; i++){
//         int mini=INT_MAX;
//     int miniidx=i;
//         for(int j=i; j<n; j++){
//             if(arr[j]<mini){
//                 mini=arr[j];
//                 miniidx=j;
                
//             }
//         }
//         swap(arr[i],arr[miniidx]);
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={6,5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     selectionsort(arr, n);
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int minelement=arr[i];
        int minindex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<minelement){
                minelement=arr[j];
                minindex=j;
            }
        }
        swap(arr[i], arr[minindex]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}