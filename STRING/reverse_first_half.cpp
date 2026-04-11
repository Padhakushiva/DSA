// #include<iostream>
// using namespace std;
// int main()
// {
//     string s="abcdefgh";
//     cout<<s<<endl;
//     int l=s.size();
//     reverse(s.begin()+0,s.begin()+l/2);  
//      cout<<s;
// } 



#include<iostream>
using namespace std;
int main()
{
    string s="abcdefgh";
    cout<<s<<endl;

    reverse(s.begin()+2,s.begin()+6);  
     cout<<s;
} 
