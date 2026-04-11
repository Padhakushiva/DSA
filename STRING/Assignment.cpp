// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     string s="Pbwcshkuiglhlds";
//     for(int i=0; i<s.size(); i++){
//         if(i%2!=0){
//             s[i]='#';
//         }
//     }
//     cout<<s;

// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     string s="pwians";
//     int count=0;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]!='a' || s[i]!='e' || s[i]!='i' || s[i]!='o' || s[i]!='u'){
//             count++;
//         }
//     }
//     cout<<count;

// }


// QUESTION 3

// #include<iostream>
// using namespace std;
// bool ispalindrome(string s, int j){
//     bool isyes=true;
//     for(int i=0; i<j; i++){
//         if(s[i]==s[j]){
//             j--;
//         }
//         else{
//             isyes= false;
//         }
//     }
//     return isyes;
// }
// int main(){
//     string s="abcdcba";
//     int j=s.size()-1;

//     cout<<ispalindrome(s,j);
    
// }


// question 4
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s="abcdefgh";
//     int n=s.size();
//     int low=0;
//     int high=n-1;;
//     int mid=low+(high-low)/2;
//     low=mid+1;
//     while(low<=high){
//         swap(s[low],s[high]);
//         low++;
//         high--;
//     }
//     cout<<s;
// }


// Question 5 

#include<iostream>
using namespace std;
int main(){
    string s="3244";
    vector<int> arr;
    for(int i=0; i<s.size(); i++){
        arr.push_back((int)s[i]);
    }
    for(int i=0; i<s.size(); i++){
        arr.push_back((int)s[i]);
    }

}