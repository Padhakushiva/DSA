// Q1. Calculate the product of all the elements in the given array.

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the enter the size of array : ";
//     int x;
//     cin>>x;
//     int arr[x];
//      cout<<"Enter the elements of array : ";
//     for(int i=0; i<x; i++){
//         cin>>arr[i];
//     }
//     int product=1;
//     for(int i=0; i<x; i++){
//         cout<<arr[i]<<" ";
//         product*=arr[i];

//     }
//     cout<<endl<<product;
// }




// Q2. Find the second largest element in the given Array in one pass.

// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     cout<<"Enter size: ";
//     int n;
//     cin >> n;
//     cout<<"Enter Array elements : ";
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int max1=INT_MIN;
//     int max2=INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>max1){
//             max2=max1;
//             max1=arr[i];
//         }
//         else if(arr[i]>max2 && arr[i]!=max1){
//             max2=arr[i];
//         }

//     }
//     if(max2==INT_MIN){
//         cout<<"NO";
//     }
//     else{
//         cout<<max2;
//     }
// }




// Q3. Find the minimum value out of all elements in the array.

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the size: ";
//     cin>>size;

//     cout<<"Enter the elements : ";
//     int arr[size];
//     int mini=INT_MAX;
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<size; i++){
//         if(arr[i]<mini){
//             mini=arr[i];
//         }
//     }
//     cout<<mini;

// }




// Q4. Given an array, predict if the array contains duplicates or not.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    cout<<"Enter the elements : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
         
    }

}