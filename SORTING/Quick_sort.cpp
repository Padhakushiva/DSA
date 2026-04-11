#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v, int start, int end){
    int pivot=v[start];
    int count=0;
    for(int i=start+1; i<=end; i++){
        if(v[i]<pivot){
            count++;
        }
    }
    int pivotidx=count+start;
    swap(v[start], v[pivotidx]);
    int i=start, j=end;
    while(i<pivotidx && j>pivotidx){
        while(v[i]<pivot) i++;
        while(v[j]>pivot) j--;
        if(v[i]>pivot && v[j]<pivot){
            swap(v[i++], v[j--]);
        }
    }
    return pivotidx;
}
void quicksort(vector<int>& v , int start, int end){
    if(start>=end) return;
    int p=partition(v,start,end);
    quicksort(v,start,p-1);
    quicksort(v,p+1,end);
}
int main(){
    vector<int> v={9,8,7,6,5,4,3,2,1};
    cout<<"Array befor sorting : "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    quicksort(v,0,v.size()-1);
    cout<<"Array after sorting : "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}