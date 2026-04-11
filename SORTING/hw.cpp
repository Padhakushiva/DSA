// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr={3,2,5,4,7,9};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     sort(arr.begin(), arr.end());
//     int num1=0;
//     int num2=0;
//     for(int i=0; i<n; i++){
//         if(i%2==0){
//             num1*=10;
//             num1+=arr[i];
//         }
//         else{
//             num2*=10;
//             num2+=arr[i];
//         }
//     }
//     cout<<"Here is the First number : ";
//     cout<<num1<<endl;
//     cout<<"Here is the second number : ";
//     cout<<num2<<endl;
//     cout<<"Here is the sum : ";
//     cout<<num1+num2;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int num = 2736;
//     string num1 = to_string(num);

//     char maxDigit = num1[0];
//     int maxIndex = 0;

//     for (int i = 1; i < num1.size(); i++) {
//         if (num1[i] > maxDigit) {
//             maxDigit = num1[i];
//             maxIndex = i;
//         }
//     }

//     swap(num1[0], num1[maxIndex]);

//     cout << num1;
// }





