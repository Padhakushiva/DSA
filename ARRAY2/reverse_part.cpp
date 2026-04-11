#include<iostream>
#include<vector>
using namespace std;

void partreverse(vector<int> &v){
    int s=v.size();

    cout<<"Enter the Range: ";
    int start,end;
    cout<<"Start: ";
    cin>>start;
    cout<<"End: ";
    cin>>end;
    int temp;
    for(int i=start; start!=end; i++){
        temp=v[end];
        v[end]=v[start];
        v[start]=temp;
        start++;
        end--;
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
    partreverse(v);


    // PRINTING
    for(int i=0; i<s; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}