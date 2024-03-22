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
    int maxLevelSum(TreeNode* root) {

        int level = 1 ;
        int sum = 0 ;
        queue<TreeNode*>q;
        q.push(root);
        vector<pair<int,int>>vec;

        while(!q.empty()) 
        {
            int Qsize= q.size();
            while(Qsize--)
            {
                TreeNode* current = q.front();
                q.pop();
                sum += current->val;
                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);
            }
            vec.push_back({sum,level++});
            sum=0;
        } 
        
        sort(vec.begin() , vec.end());

        return vec[vec.size()-1].second ;
    }
};
