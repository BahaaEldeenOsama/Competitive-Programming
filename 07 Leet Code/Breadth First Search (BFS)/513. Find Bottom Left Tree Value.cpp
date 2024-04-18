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

    int findBottomLeftValue(TreeNode* root) {
 
        int leftMostValue = -1;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int Qsize=q.size();
            bool flag = true;
            while(Qsize--)
            {
                TreeNode* curr  = q.front();q.pop();

                if(curr->left)q.push(curr->left);
                if(flag)
                {
                    leftMostValue = curr->val;
                    flag = false;

                }
                if(curr->right)q.push(curr->right);
            }
        }

        return leftMostValue;
    }
};
