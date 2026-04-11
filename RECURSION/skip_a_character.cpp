// #include<iostream>
// using namespace std;
// void skip_a_character(string s,string original, int idx){
//     if(idx==original.length()-1){
//         return ;
//     }
//     else{
//         char ch=original[idx];
//         if(ch=='i') skip_a_character(s,original,idx+1);
//         else{
//             skip_a_character(s+ch,original,idx+1);
//         }
//     }
//     cout<<s;
// }

// int main(){
//     string original="india";
//     string s="";
//     skip_a_character(s,original,0);
// }



#include<iostream>
using namespace std;
void skip_a_character(int idx, int n,char target, string ans,string& original){
    if(idx==n){
        cout<<ans;
        return;
    }
    if(original[idx]!=target){
        ans.push_back(original[idx]);
    }
    skip_a_character(idx+1,n,target,ans,original);
    
}

int main(){
    string original="india";
    int n=original.size();
    char target='i';
    skip_a_character(0,n,target,"",original);
}

