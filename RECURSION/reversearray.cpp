#include<iostream>
using namespace std;
void reversearray(int n, int first, int lst, int arr[]){
    if(first >= lst) return;
    swap(arr[first], arr[lst]);
    reversearray(n, first + 1, lst - 1, arr);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    reversearray(n, 0, n - 1, arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}