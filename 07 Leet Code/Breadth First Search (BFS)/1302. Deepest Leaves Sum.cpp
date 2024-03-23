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

 
    int deepestLeavesSum(TreeNode* root) {
        
      
        int sumLastLevel=0;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int Qsize = q.size(); 
            sumLastLevel = 0;
            while(Qsize--)
            {
                TreeNode*current =  q.front();
                q.pop();
                sumLastLevel+=current->val;
                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);
            }
        }



        return sumLastLevel;
    }
};
