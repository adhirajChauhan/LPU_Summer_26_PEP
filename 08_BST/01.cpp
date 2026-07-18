#include<iostream>
using namespace std;
 

 /*
A Binary Search tree(BST) is a special type of tree where
    #Every node has at most two children
    #For Every node -
        All values in the LST are smaller
        All values in RST are greater
    #Both LST and RST are also BST

    #inorder traversal of a BST is always sorted
*/


https://leetcode.com/problems/search-in-a-binary-search-tree/

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL || root->val == val) return root;

        if(val < root->val){
            return searchBST(root->left, val);
        }
        return searchBST(root->right, val);
    }
};

int main()
{
 
}