#include<iostream>
#include<queue>
#include<climits>
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
Node* constructtree(int arr[], int n){
   
    Node* root=new Node(arr[0]);
    queue<Node*> q;
    q.push(root);

    int i=1;
    int j=2;

    while(!q.empty() && i<n ){
        Node* temp=q.front();
        q.pop();
        if(i < n && arr[i]!=INT_MIN){
            Node* leftNode=new Node(arr[i]);
            q.push(leftNode);
            temp->left=leftNode;
        }
        if(j < n && arr[j]!=INT_MIN){
            Node* rightNode=new Node(arr[j]); 
            q.push(rightNode);
            temp->right=rightNode;
        }
        i+=2;
        j+=2;
    }
    return root;
}

void BFS(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
     int size = q.size(); 
    q.push(root);

     while(!q.empty()){
        int size = q.size();   

        while(size--){
            Node* temp = q.front();
            q.pop();

            cout << temp->val << " ";

            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }

        cout << endl;   
    }
}


bool isleaf(Node* root){
    if(root == NULL) return false;
    return (root->left == NULL && root->right == NULL);
}

void leaf_boundary(Node* root){
    if(root == NULL) return;
    if(isleaf(root)){
        cout << root->val << " ";
        return;
    }
    leaf_boundary(root->left);
    leaf_boundary(root->right);
}

void left_boundary(Node* root){
    if(root==NULL) return;
    if(!isleaf(root) && root->left!=NULL){
        cout<<root->val<<" ";
        left_boundary(root->left);
    }
    else if(!isleaf(root) && root->left==NULL){
        cout<<root->val<<" ";
        left_boundary(root->right);
    }
}

void right_boundary(Node* root){
    if(root==NULL) return;
    if(!isleaf(root) && root->right!=NULL){
        cout<<root->right->val<<" ";
        right_boundary(root->right);
    }
    else if(!isleaf(root) && root->right==NULL){
        cout<<root->left->val<<" ";
        right_boundary(root->left);
    }
}


int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
     int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=constructtree(arr,n);

    // BFS(root);

    cout<<"Left boundary: "<<endl;
    left_boundary(root);
    cout<<endl<<"Right boundary: "<<endl;
    right_boundary(root);
    cout<<endl<<"Leaf Nodes: "<<endl;
    leaf_boundary(root);
}





