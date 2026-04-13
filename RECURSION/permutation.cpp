#include<iostream>
using namespace std;
void pemutation_csl(string st,string ans){
    if(st.size()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<st.size(); i++){
        char ch=st[i];
        string left=st.substr(0,i);
        string right=st.substr(i+1);
        pemutation_csl(left+right,ans+ch);
    }
    
}
int main(){
    string st="abc";
    pemutation_csl(st,"");
}