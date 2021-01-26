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
   bool isBalanced(TreeNode* root) {
    if(!root)   return true;
        
        int left = check(root->left);
        int right = check(root->right);
        if(left == INT_MIN || right == INT_MIN || abs(left-right) > 1)  return false;
        return true;
    }
    
    int check(TreeNode* root){
        if(!root)   return 0;
        int left = check(root->left); 
        int right = check(root->right); 
        if(left == INT_MIN || right == INT_MIN || abs(left-right) > 1)  return INT_MIN; //if 
        return max(left,right)+1; 
    }
};
  
     

