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
    bool isUnivalTree(TreeNode* root) {
        

        queue<TreeNode*>q;
        q.push(root);
      
        int lastValue = root->val;
        int cnt=0;

        while(!q.empty())
        {
            TreeNode* current = q.front();q.pop();
    
            if(cnt && lastValue!= current->val) return false;
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
            
            lastValue = current->val;
            ++cnt;
        }

        return true;
    }
};
