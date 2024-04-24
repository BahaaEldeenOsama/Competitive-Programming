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
    int longestZigZag(TreeNode* root) {
    if (!root) return 0;
    
    queue<pair<TreeNode*, pair<int, int>>> q; // {node, {length,direction}}
    q.push({root, {0, 0}});  
    
    int longest = 0;
    while (!q.empty()) {

        auto node = q.front();q.pop();
        TreeNode*curr = node.first;
        int len = node.second.first;
        int direction =  node.second.second;

        longest = max(longest, len);
        
        if (curr->left) {
            if (direction == 1)  
                q.push({curr->left, {len+1,0} });
            else
                q.push({curr->left, {1,0} });  
        }
        
        if (curr->right) {
            if (direction == 0)  
                q.push({curr->right, {len+1 , 1} });
            else
                q.push({curr->right, {1 , 1} });  
        }
    }
    
    return longest;
}
};
