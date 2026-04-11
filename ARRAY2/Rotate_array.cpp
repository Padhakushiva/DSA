#include<iostream>
#include<vector>
using namespace std;
void rotatearray(vector<int> &v){
    int s=v.size();
    cout<<"Enter the Steps: ";
    int k;
    cin>>k;
    k=k%s;

    
    int start=0;
    int lst=s-k;
    int temp;
    while(start!=lst){
        temp=v[lst];
        v[lst]=v[start];
        v[start]=temp;
        start++;
        lst--;
    }
    start=s-k;
    lst=s-1;
    while(start!=lst){
        temp=v[lst];
        v[lst]=v[start];
        v[start]=temp;
        start++;
        lst--;
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
    rotatearray(v);


    // PRINTING
    for(int i=0; i<s; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}