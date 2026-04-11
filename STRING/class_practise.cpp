#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1 = "Hello";
    string s2 = "world";


    s1.insert(5, " ");
    cout << "After insert: " << s1 << endl;   

    s1.append(s2);
    cout << "After append: " << s1 << endl;   

    if (s1.compare(s2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are NOT equal" << endl;

    int pos = s1.find("World");
    cout << "Position of 'World': " << pos << endl;

    string sub = s1.substr(0, 5);
    cout << "Substring: " << sub << endl;     

    cout << "Length: " << s1.length() << endl;

    // cout<<s2.find('W')<<endl;
    char c='h';
    c= toupper(c);
    cout<<c;
    return 0;
}