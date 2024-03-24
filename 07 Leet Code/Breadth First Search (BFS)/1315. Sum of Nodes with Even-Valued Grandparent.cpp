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

     int BrachsValues(TreeNode* root){

        return root ? root->val : 0;
     }   

    int sumEvenGrandparent(TreeNode* root) {
        
        int sumEvenValue= 0;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int QBranchSize=q.size();
            while(QBranchSize--)
            {
                TreeNode* current = q.front() ; q.pop();
                if(current->val %2 == 0) {
                    
                    if(current->left)
                    {
                        sumEvenValue += BrachsValues(current->left->left)  +  BrachsValues(current->left->right)  ;
                    }
                    if(current->right)
                    {
                        sumEvenValue += BrachsValues(current->right->left)  +  BrachsValues(current->right->right)  ;
                    }
                }



                if(current->left)q.push(current->left); 
                if(current->right)q.push(current->right); 



            }
        }



        return sumEvenValue;
    }
};
