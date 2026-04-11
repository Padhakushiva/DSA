#include<iostream>
using namespace std;
int permutationcombination(int factP,int factR,int difffact){
        return factP/(factR*difffact);
};
int main(){
    int p,r;
    cout<<"Enter P: ";
    cin>>p;
    cout<<"Enter R: ";
    cin>>r;
    int factP=1;
    for(int i=1; i<=p; i++){
        factP*=i;
    }
    int factR=1;
    for(int i=1; i<=r; i++){
        factR*=i;
    }
    int difffact=1;
    for(int i=1; i<=p-r; i++){
        difffact*=i;
    }
    cout<<permutationcombination(factP,factR,difffact);


    

}