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
    /// Solution Using DFS and BFS

    int result = 0; 
    void DFS(TreeNode* root,int targetSum ,long long sum )
    {
        if(!root)return ;

        sum+= root->val;
        if(sum==targetSum)++result;

        DFS(root->left,targetSum, sum);
        DFS(root->right,targetSum, sum);
    }



    int pathSum(TreeNode* root, int targetSum) {
        
        if(!root)return 0;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int Qsize = q.size();
            while(Qsize--)
            {
                TreeNode* curr = q.front();
                q.pop();

                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);

                DFS(curr,targetSum,0);
            }
        }

        return result;
    }
};
