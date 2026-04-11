#include<iostream>
#include<vector>
using namespace std;
void cyclesort(vector<int> &v){
    int i=0;
    while(i<v.size()){
        if(v[i]==i+1){
            i++;
        }
        else{
            swap(v[i],v[v[i]-1]);
        }
    }
}
int main(){
    vector<int> v={4,1,6,2,5,3};
    int n=v.size();
    for(int i=0; i<n ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cyclesort(v);
    for(int i=0; i<n ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}