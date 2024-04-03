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
    int goodNodes(TreeNode* root) {

        int x = root->val;
        int goodNodes = 1;
        
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {

            TreeNode* curr = q.front();
            q.pop();

            x = curr->val;

            if(curr->left)
            {
                if(x> curr->left->val)
                {
                    curr->left->val = x;
                }
                else{
                    ++goodNodes ; 
                }
                q.push(curr->left);
            }
            if(curr->right)
            {
                if(x> curr->right->val)
                {
                    curr->right->val = x;
                }
                else{
                    ++goodNodes ; 
                }
                q.push(curr->right);
            }
        }
        return goodNodes;
    }
};
