#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* root){
    if(root==NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(Node* root){


}

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int x = countNodes(root->left);
    int y = countNodes(root->right);

    return 1 + x + y;
}

int countLeaf(Node* root){
    //base case
    if(root==NULL) return 0;

    if(root->left == NULL && root->right==NULL) return 1;

    int x = countLeaf(root->left);
    int y = countLeaf(root->right);
    return x + y;



}
 
int main()
{
  Node* root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);

  root->left->left = new Node(4);
  root->left->right = new Node(5);



}