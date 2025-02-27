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

    int cnt = 0 ;
    void DFS(TreeNode* root)
    {
        if(!root)return ;
        DFS(root->left);
        DFS(root->right);
        ++cnt;
    }

    int countNodes(TreeNode* root) {
        
        DFS(root);
        return cnt;

    }
};
