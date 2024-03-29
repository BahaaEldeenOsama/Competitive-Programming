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
    bool isCousins(TreeNode* root, int x, int y) {

        int X_flag = false;
        int Y_flag = false;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int Qsize = q.size();
            while(Qsize--)
            {
                TreeNode*current = q.front();
                q.pop();

                if(current->val == x) X_flag = true;
                if(current->val == y) Y_flag = true;

                 if(current->left && current->right){
                     if((current->left->val==x && current->right->val==y)|| (current->left->val==y && current->right->val==x))
                            return false;
                }

                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);

                
            }
            if( (X_flag == true && Y_flag== false)  || (X_flag == false && Y_flag== true)  ) return false;
        }

        return X_flag && Y_flag ;
    }
};
