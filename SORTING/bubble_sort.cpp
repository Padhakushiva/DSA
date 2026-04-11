// #include<iostream>
// using namespace std;

// void bubblesort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         bool isswapped=false;
//         for(int j=0; j<n-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 isswapped=true;
//             }
//         }
//         if(!isswapped){
//             break;
//         }
//     }
// }
// int main(){
//     int arr[]={6,5,4,3,2,1};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     bubblesort(arr,size);

//     for(int i=0; i<size-1; i++){
//         cout<<arr[i];
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        bool flag=false;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(!flag){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}
