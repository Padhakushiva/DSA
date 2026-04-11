// #include<iostream>

// #include<string>
// #include<sstream>
// using namespace std;
// int main(){
//     string s="Shiva is good Teacher";
//     stringstream ss(s);
//     string temp;

//     while(ss>>temp){
//         cout<<temp<<endl;
//     }
// }



#include<iostream>

#include<string>
#include<sstream>
using namespace std;
int main(){
    string s="Shiva is a good Teacher. He is a student also good Student";
    int len=s.size();
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        string chr=temp;
        v.push_back(temp);
        // cout<<temp<<endl;
    }
    sort(v.begin(),v.end());
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(i==0){
            if(s[i+1]!=s[i]){
                count++;
            }
        }
        else if(i==s.size()-1){
            if(s[i-1]!=s[i]){
                count++;
            }
        }
        else{
            if(s[i-1]!=s[i] && s[i+1]!=s[i]){
                count++;
            }
        }
    }
    cout<<count;
}