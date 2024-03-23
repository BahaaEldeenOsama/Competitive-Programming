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

    int deapLevel(TreeNode* node){
        int level = 0;
        int Qsize = 0;
        queue<TreeNode*>q;
        q.push(node);

        while(!q.empty())
        {
            Qsize = q.size();
            while(Qsize--)
            {
                TreeNode*current =  q.front();
                q.pop();
                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);
            }
            ++level;
        }

        return level;
    }
    int deepestLeavesSum(TreeNode* root) {
        
        int Lastlevel = deapLevel(root);
        int currLevel = 0;
        int sumLastLevel=0;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int Qsize = q.size(); 
            while(Qsize--)
            {
                TreeNode*current =  q.front();
                q.pop();

                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);
                if(currLevel == Lastlevel-1){
                    sumLastLevel+=current->val;
                }
            }

            currLevel++;
        }



        return sumLastLevel;
    }
};
