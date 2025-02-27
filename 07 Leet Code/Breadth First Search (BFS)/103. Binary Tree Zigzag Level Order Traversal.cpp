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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

       
        vector<vector<int>>res;
        if(!root)return res;

        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            vector<int>levelBranch;
            int Qsize=q.size();
            while(Qsize--)
            {
                TreeNode*current = q.front();
                q.pop();


                levelBranch.push_back(current->val);
                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);

               
            }
            res.push_back(levelBranch);
        }

        for(int i=0 ; i<res.size();++i)
        {
            if(i&1)
            {
                reverse(res[i].begin(),res[i].end());
            }
        }
        
        return res;
    }
};
