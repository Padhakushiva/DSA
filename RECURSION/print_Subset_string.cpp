#include<iostream>
using namespace std;
void print_subset(string original,string ans,vector<string>& mainans){
    if(original==""){
        mainans.push_back(ans);
        return;
    }
    char ch=original[0];
    print_subset(original.substr(1),ans+ch,mainans);
    print_subset(original.substr(1),ans,mainans);
}
int main(){
    string original="abc";
    vector<string> mainans;
    print_subset(original,"",mainans);
    for(int i=0; i<mainans.size(); i++){
        cout<<mainans[i]<<endl;
    }
}