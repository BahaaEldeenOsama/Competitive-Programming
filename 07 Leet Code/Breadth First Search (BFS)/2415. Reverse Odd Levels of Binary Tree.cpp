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

    TreeNode* reverseOddLevels(TreeNode* root) {

        if(!root)return{} ;

        queue<TreeNode*>q;
        q.push(root);
        
        int level = 0;

        while(!q.empty())
        {
            int Qsize = q.size() ;
            vector<TreeNode*> temp; 
            while(Qsize--)
            {
                TreeNode* current = q.front();q.pop();

                if(current->left) q.push(current->left);
                if(current->right) q.push(current->right);
                if(level&1)// odd
                {
                    temp.push_back(current);
                }
            }

            if(level&1)// Odd node
            {
                for(int i=0 ; i<temp.size()/2;++i)
                {
                    swap(temp[i]->val , temp[temp.size()-i-1]->val);
                }
            }
            level++;
        }
        return  root;
    }
};
