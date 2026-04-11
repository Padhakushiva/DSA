#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==1){
        return a;
    }
    else if(b==0){
        return 1;
    }
    int ans=power(a,b/2);
    
    
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}


int main(){
    cout<<power(3,5);
}