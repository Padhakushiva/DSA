// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
// public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->val=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// void BFS(Node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);

//     while(!q.empty()){
//         Node* temp=q.front();
//         q.pop();
//         cout<<temp->val;

//         if(temp->left!=NULL){
//             q.push(temp->left);
//         }
//         if(temp->right!=NULL){
//             q.push(temp->right);
//         }
//     }
// }
// int main(){
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     BFS(root);
//     return 0;
// }



#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};

void BFS(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp->left!=NULL){
            q.push(temp->left);
        }
         if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
int main(){
    
}