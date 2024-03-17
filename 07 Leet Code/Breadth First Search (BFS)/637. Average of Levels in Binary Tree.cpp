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
    vector<double> averageOfLevels(TreeNode* root) {
        
   queue<TreeNode*>q;
   q.push(root);
   vector<double>res;
  
   while(!q.empty())
   {
        double sum = 0 , cnt = q.size();
        int queueSize = q.size();
        while(queueSize--)
        {
            TreeNode* current = q.front(); q.pop();
            sum += current->val;
            if(current->left)
            {
                q.push(current->left);
            }
            if(current->right)
            {
                q.push(current->right);
            }
        }
        res.push_back(sum/cnt);
   }


    return res;
}
};
