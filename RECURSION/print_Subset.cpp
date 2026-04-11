#include<iostream>
using namespace std;
void print_subsets(string original_string, string ans){
   if(original_string==""){
    cout<<ans<<endl;
    return;
   }
   char ch=original_string[0];
   print_subsets(original_string.substr(1),ans+ch);
   print_subsets(original_string.substr(1),ans);
}
int main(){
    string original_string="abc";
    print_subsets(original_string, "");
}