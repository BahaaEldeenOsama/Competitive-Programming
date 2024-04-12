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
    TreeNode* increasingBST(TreeNode* root) {

        vector<int>vec;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {

            int Qsize = q.size();
            while(Qsize--)
            {
                TreeNode* curr = q.front();
                q.pop();
                vec.push_back(curr->val);
                
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }

        sort(vec.begin(), vec.end());

        TreeNode* NewRoot = new TreeNode(vec[0]);
        TreeNode* curr = NewRoot;
        for(int i=1 ; i<vec.size();++i)
        {
            curr->right =  new TreeNode(vec[i]);
            curr = curr->right;
        }


        return NewRoot;
          
    }
};
