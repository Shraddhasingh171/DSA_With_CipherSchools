#include<iostream>
using namespace std;

struct node {
    int data; 
    node* left;
    node* right;
};

node *newnode(int data){
    node *p = new node;
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return (p);
}

bool isFull(node *root){
    if(root == NULL)
        return true;
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    if(root->left != NULL && root->right != NULL){
        return isFull(root->left) && isFull(root->right);
    }
    return false;
}

int main(){
    node *root = newnode(10);
    root->left = newnode(20);
    root->right = newnode(30);
    root->left->left = newnode(40);
    root->right->right = newnode(50); //if we comment this then it is full binary tree, otherwise not
    root->left->right = newnode(60);

    if(isFull(root)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no";
    }
    return 0;
}
