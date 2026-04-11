#include<iostream>
using namespace std;
void hanoi(int n, char source, char destination, char helper){
    if(n==1){
        cout<<"Move disk 1 from "<<source <<" to "<<destination<<endl;
        return;
    }
    hanoi(n-1, source, helper, destination);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    hanoi(n-1, helper,destination , source);

}
int main(){
    int n=3;
    hanoi(n,'A','B','C');
}