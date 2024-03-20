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

    vector<int>vec;

    void BFS(TreeNode* root) {
        // BFS ALgorithm
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {

            TreeNode* current = q.front();q.pop();

            if(current->left)q.push(current->left);
            if(current->right)q.push(current->right);

            vec.push_back(current->val);
        }
    }


    bool findTarget(TreeNode* root, int k) {

        BFS(root);
        sort(vec.begin(),vec.end());
        
        /// Find sum two number equal k
         for(int i=0 ; i<vec.size();++i)
         {
            for(int j=i+1 ;j<vec.size() ;++j)
            {
                if(vec[i]+vec[j] ==  k)
                {
                    return true;
                }
            }
         }

        return false;
    }
};
