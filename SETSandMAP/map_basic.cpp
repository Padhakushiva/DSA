#include<iostream>
#include<unordered_map>

using namespace std;
int main(){
    unordered_map<string, int> m;

    // FIRST METHOD TO INSERT THE ELEMENT IN MAP
    pair<string,int> p1;
    p1.first="Shiva";
    p1.second=21;
    m.insert(p1);

    // SECOND METHOD TO INSERT THE ELEMENT IN MAP
    m["Harsh"]=21;
    m["Shiva"]=22;
    for(auto p : m){
        cout<<p.first<<" " <<p.second<<endl;
    }
}