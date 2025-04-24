#include<bits//stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        this->data = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void buildTree(Node* &root, int x){
    if(root==nullptr){
        root = new Node(x);
        return;
    }
    queue<Node*>q;
    q.push(root);

   
}

int main(){
    Node* root = new Node(-1);
    Node* curr = root;
    curr = nullptr;

    int n;
    while(n--){
        int e;
        cin >> e;
        buildTree(curr, e);
    }

    return 0;
}