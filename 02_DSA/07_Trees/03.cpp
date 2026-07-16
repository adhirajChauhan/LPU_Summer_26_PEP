https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if(root==NULL) return -1;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        return 1 + max(lh, rh);
        
    }
};




https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1
/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(root==NULL) return 0;
        
        int ls = sumBT(root->left);
        int rs = sumBT(root->right);
        
        return root->data + ls + rs;
        
    }
};







https://leetcode.com/problems/sum-of-left-leaves/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;

        int sum = 0;
        if(root->left && rott->left->left ==NULL && root->left->right == NULL){
            sum += root->left->data;
        }
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);
        return sum;

        
    }
};








