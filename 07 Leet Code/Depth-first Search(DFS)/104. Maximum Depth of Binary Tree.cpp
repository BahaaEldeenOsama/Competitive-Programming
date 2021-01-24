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
    
    void depth(TreeNode*root,int&distance)
    {
        int l=0;
        int r=0;
        if(!root){return;}
        depth(root->left,l);
        depth(root->right,r);
        distance = max(r,l) + 1;
        
    }
    
    
public:
    int maxDepth(TreeNode* root) 
    {
        int cnt = 0;
        depth(root,cnt);
        return cnt ;
        
    }
};
