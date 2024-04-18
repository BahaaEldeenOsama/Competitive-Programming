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

 int maxDepth(TreeNode* root) {

        if (root == nullptr)
            return 0;

        queue<TreeNode*> q;
        q.push(root);
        int levels = 0;
        while (!q.empty()) {

            int Qsize = q.size();
            ++levels;
            while (Qsize--) {
                 
                TreeNode* curr = q.front();q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }

        return levels;
    }

    int findBottomLeftValue(TreeNode* root) {
    
        int Targetlevel = maxDepth(root);
        int currLevel = 0;

        int leftMostValue = -1;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int Qsize=q.size();
            ++currLevel;
            while(Qsize--)
            {
                TreeNode* curr  = q.front();q.pop();

                if(curr->left)q.push(curr->left);
                if(currLevel==Targetlevel)
                {
                    leftMostValue = curr->val;
                    return leftMostValue;

                }
                if(curr->right)q.push(curr->right);
            }
        }




        return leftMostValue;
    }
};
