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
    vector<int> rightSideView(TreeNode* root) {

    vector<int>res;
    if (!root) return res;
    queue<TreeNode*>q;
    q.push(root);
    int value = 0;
    
    /// parent
    while(!q.empty())
    {
       int Qsize = q.size();
       
       /// child  
        while(Qsize--)
        {
            TreeNode* current = q.front();q.pop();
            value = current->val ;
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
           
        }
    
            res.push_back(value);
    }



        return res;
    }
};
