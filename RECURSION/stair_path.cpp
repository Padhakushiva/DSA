#include<iostream>
using namespace std;
int No_of_ways(int no_of_stairs){
    if(no_of_stairs==0) return 1;
    if(no_of_stairs<0) return 0;

    return No_of_ways(no_of_stairs-1)+No_of_ways(no_of_stairs-2)+No_of_ways(no_of_stairs-3);
}
int main(){
    int no_of_stairs=8;
    cout<<No_of_ways(no_of_stairs);
}