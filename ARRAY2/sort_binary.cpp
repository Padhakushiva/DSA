#include<iostream>
#include<vector>
using namespace std;

void sortbinary(vector<int>& v){
    int left=0;
    int right=v.size()-1;
    while(left<right){
        if(v[left]==0){
            left++;
        }
        else if(v[right]==1){
            right--;
        }
        else{
            swap(v[left],v[right]);
            left++;
            right--;
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
    sortbinary(v);


    // PRINTING
    for(int i=0; i<s; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}