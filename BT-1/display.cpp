#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};


void displaylevel(Node* root,int currentlevel, int targetlevel){
    if(root==0){
        return;
    }
    if(currentlevel==targetlevel){
        cout<<root->val;
        return;
    };
    displaylevel(root->left,currentlevel+1,targetlevel);
    displaylevel(root->right,currentlevel+1,targetlevel);


};
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    int currentlevel =0, targetlevel=2;
    displaylevel(a,currentlevel,targetlevel);
}