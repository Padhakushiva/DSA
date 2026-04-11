#include<iostream>
using namespace std;
void maze(int sr,int sc, int er,int ec,string ans){
    if(sr>er || sc>ec){
        return;
    }
    if(sr==er && sc==ec){
        cout<<ans<<endl;
        return;
    }

    maze(sr,sc+1,er,ec,ans+'R');
    maze(sr+1,sc,er,ec,ans+'D');
    
}
int main(){
   maze(0,0,2,2," ");
}