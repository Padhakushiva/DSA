// STAR TRIANGELE 

// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter Rows: ";
//     cin>>rows;
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// TRIANGLE OF NUMBERS

// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter Rows: ";
//     cin>>rows;
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
// }


// ODD NUMBER TRIANGLE

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter Rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (2 * j - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}