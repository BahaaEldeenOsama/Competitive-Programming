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
class Solution 
{
    
    TreeNode* BST(vector<int>& nums ,int low,int hight)
    {
       
        if(low>hight)
        {
            return nullptr;
        }
        int mid = low+(hight-low)/2;
        TreeNode* root = new TreeNode;
        root->val=nums[mid];
        root->left = BST(nums,low,mid-1)   ;
        root->right = BST(nums,mid+1,hight) ; 
        
        return root;
        
    }
    public:
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
       if(!nums.empty())
       {
           return BST(nums,0,nums.size()-1);
       }
       else
       {
          return nullptr;     
       }
        
    }
};
