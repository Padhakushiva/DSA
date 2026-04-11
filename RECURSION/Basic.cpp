// #include<iostream>
// using namespace std;

// void printgoodmorning(int n){
//     if(n==0){
//         return;
//     }
//     cout<<"Good Morning"<<endl;
//     printgoodmorning(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     printgoodmorning(n);
// }


// #include<iostream>
// using namespace std;
// void print_n_to1(int n){
//     if(n==0){
//         return;
//     }
//     print_n_to1(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cout<<"Enter the limit: ";
//     cin>>n;
//     print_n_to1(n);
// }


// #include<iostream>
// using namespace std;
// void SumOfFirst_n_numbers(int n,int sum){
//     if(n==0){
//         cout<<"Total sum is : "<<sum;
//         return;
//     }
//     SumOfFirst_n_numbers(n-1,sum+n);
// }
// int main(){
//     int n;
//     cout<<"Enter the No of digit : ";
//     cin>>n;
//     int sum=0;
//     SumOfFirst_n_numbers(n,sum);
// }

#include<iostream>
using namespace std;
int calculate_factorial(int n){
    int ans=0;
        if(n==1 || n==0){
            return 1;
        }
        return n*calculate_factorial(n-1);
        
    }
int main(){
     int n;
    cout<<"Enter the No of digit : ";
    cin>>n;
    int sum=0;
    cout<<calculate_factorial(n);
}