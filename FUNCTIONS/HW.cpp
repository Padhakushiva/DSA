// Q1. Write a function to print squares of n natural numbers.

// #include<iostream>
// using namespace std;
// void squareOfNumber(int n){
//     for(int i=1; i<=n ; i++){
//         cout<<i<<" -> "<<i*i<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter Number : ";
//     cin>>n;
//     squareOfNumber(n);

// }




// Q2. Write a function to take the radius of a circle as an argument and return its area.

// #include<iostream>
// using namespace std;

// int areaofcircle(int r){
//     return 22.0/7*(r*r);
// }
// int main(){
//     int r;
//     cout<<"Enter the radius : ";
//     cin>>r;
//     cout<<areaofcircle(r);

// }



// Q3. Given two numbers a and b, write a function to print all odd numbers between them.

// #include<iostream>
// using namespace std;

// void oddnumber(int a, int b){
//     for(int i=a; i<b; i++){
//         if(i%2!=0){
//             cout<<i<<" "<<endl;
//         }
//     }
// }
// int main(){
//     int a,b;
//     cout<<"Enter a: ";
//     cin>>a;
//     cout<<"Enter b: ";
//     cin>>b;

//     oddnumber(a,b);

// }




// Q4. Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;
void NoOfDdigit(int no){
    int original=no;
    int digits=0;
    for(int i=0; no>0; i++){
        no/=10;
        digits++;
    }
    cout<<"No. of digit in this Number: "<<digits<<endl;
    cout<<"Square of this Number: "<<original*original;
}
int main(){
    int no;
    cout<<"Enter the Number: ";
    cin>>no;

    NoOfDdigit(no);
}