// #include<iostream>
// using namespace std;

// int powercalculate(int a, int b){
//     if(b==0) return 1;
//    return a*powercalculate(a,b-1);
   
// }
// int main(){
//     int a;
//     cout<<"Enter the value of base : ";
//     cin>>a;
//     int b;
//     cout<<"Enter the value of power : ";
//     cin>>b;
    
//     cout<<powercalculate(a, b);
// }


#include<iostream>
using namespace std;
int calculatePow(int base, int pow){
    if(pow<=0){
        return 1;
    }
    return base*calculatePow(base, pow-1);
}
int main(){
    cout<<calculatePow(2,3);
}
