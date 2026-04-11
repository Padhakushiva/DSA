#include<iostream>
#include<vector>
using namespace std;


void sortZOT(vector<int> &v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid <= high){
        if(v[mid]==0){
            swap(v[mid],v[low]);
            low++;
        }
        else if(v[mid]==2){
            swap(v[mid], v[high]);
            high--;
        }
        else if(v[mid]==1){
            mid++;
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
    sortZOT(v);


    // PRINTING
    for(int i=0; i<s; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}