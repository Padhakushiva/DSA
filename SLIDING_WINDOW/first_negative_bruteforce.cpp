// #include<iostream>
// using namespace std;
// void firstnegative(int arr[],int n, int k){
//     int ans[n];
//     for(int i=0; i<=n-k; i++){
//         ans[i] = 0;
//         for(int j=i; j<=i+k-1; j++){
//             if(arr[j]<0){
//                 ans[i]=arr[j];
//                 break;
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }

// }
// int main(){
//     int arr[] = {2, -3, 4, 4, -7, -1, 4, -2, 6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=3;
//     firstnegative(arr, n, k);
// }




// OPTIMIZED APPROACH
#include<iostream>
using namespace std;
void firstnegative(int arr[],int n, int k){
    int ans[n];
    int prevnegative;
    for(int i=0; i<=i+k-1; i++){
        if(arr[i]<0){
            prevnegative=i;
            ans[0]=arr[i];
            break;
        }
    }

    int i=1, j=k;
    for(int j=i; j<= n - k; j++) {
        if(j<=prevnegative){
            ans[j]=arr[prevnegative];
        }
        else{ 
            for(int start=j; start<=j+k-1; start++){
                if (arr[j] < 0) {
                    prevnegative = j;
                    break;
                }
            }
        }
    }

}
int main(){
    int arr[] = {2, -3, 4, 4, -7, -1, 4, -2, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    firstnegative(arr, n, k);
}