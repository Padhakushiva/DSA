// Solid RECTANGLE 

// #include<iostream>
// using namespace std;
// int main(){
//     int col,rows;
//     cout<<"Enter Rows: ";
//     cin>>rows;
//     cout<<"Enter Columns: ";
//     cin>>col;

//     for(int i=0; i<rows; i++){
//         for(int j=0; j<col; j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }






// APLHABET RECTANGLE 


#include<iostream>
using namespace std;
int main(){
    int col,rows;
    cout<<"Enter Rows: ";
    cin>>rows;
    cout<<"Enter Columns: ";
    cin>>col;

    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<char(j+65);
        }
        cout<<endl;
    }
}