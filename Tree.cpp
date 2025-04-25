#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node* left;
    Node* right;
    Node(int x){
        this->data = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};
void buildtree(Node* &root, int x){
    if(!root){
        root= new Node(x);
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp->left == NULL){
            temp->left = new Node(x);
            return;
        }
        else{
            q.push(temp->left);
        }

        if(temp->right == NULL){
            temp->right = new Node(x);
            return;
        }
        else{
            q.push(temp->right);
        }
    }

}

void inorder(Node* root){
    if( root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data <<" "; 
    inorder(root->right);

}
void preorder(Node* root){
    if( root == nullptr){
        return;
    }
    cout << root->data <<" "; 
    preorder(root->left);
    preorder(root->right);

}
void postorder(Node* root){
    if( root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data <<" "; 

}
int main(){
    Node* root = nullptr;

    int n;
    cin >> n;
    while(n--){
        int e;
        cin >> e;
        buildtree(root, e);
    } 
    cout << "Inordered Traversal";
    inorder(root);
    cout << "  \n Preordered Traversal" ;
    preorder(root);
    cout << " \n Preordered Traversal" ;
    postorder(root);
    return 0;
}