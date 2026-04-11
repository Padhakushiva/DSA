// #include<iostream>
// using namespace std;

// void inserion_sort(int arr[], int n){
//     for(int i=1; i<n; i++){
//         int j=i;
//         while(j>=1 && arr[j]<arr[j-1]){
//             swap(arr[j], arr[j-1]);
//             j--;
//         }
//     }

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main(){
//     int arr[]={6,5,4,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     inserion_sort(arr, n);
// }


#include<iostream>
using namespace std;
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   
    for(int i=0; i<n; i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}