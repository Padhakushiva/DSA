#include<iostream>
#include<vector>
using namespace std;


void sortnegpos(vector<int> &v){
    int neg=0;
    int pos=v.size()-1;
    while(neg<pos){
        if(v[neg]<0){
            neg++;
        }
        else if(v[pos]>0){
            pos--;
        }
        else{
            swap(v[neg], v[pos]);
            neg++;
            pos--;
        }
    }
}
int main(){
    vector<int> v;
    int s;

    // SIZE OF ARRAY
    cout<<"Enter the size of array : ";
    cin>>s;

    // ELEMENTS OF ARRAY 
    int x;
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<s; i++){
        cin>>x;
        v.push_back(x);
    }

    // PRINTING
    for(int i=0; i<s; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // CALLING
    sortnegpos(v);


    // PRINTING
    for(int i=0; i<s; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}