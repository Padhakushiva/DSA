// #include<iostream>
// using namespace std;
// int factorial(int n, int ans   ){
//     if(n==1){
//         return ans;
//     }
//     ans*=n;
//     return factorial(n-1,ans);
// }
// int main(){
//     int n;
//     int ans=1;
//     cout<<"Enter the number to print factorial : ";
//     cin>>n;
//     cout<<factorial(n,ans);
// }


#include<iostream>
using namespace std;

int factorial(int n, int ans){
    if(n==1){
        return ans;
    }
    ans*=n;
    return factorial(n-1, ans);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans=1;
    cout<<factorial(n, ans);
}