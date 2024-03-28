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
    int getMinimumDifference(TreeNode* root) {
        if (!root) return 0;

        vector<int> vec;
        inorderTraversal(root, vec);

        int res = INT_MAX;
        for (int i = 1; i < vec.size(); ++i) {
            res = min(res, abs(vec[i] - vec[i-1]));
        }

        return res;
    }

private:
    void inorderTraversal(TreeNode* node, vector<int>& vec) {
        if (!node) return;

        inorderTraversal(node->left, vec);
        vec.push_back(node->val);
        inorderTraversal(node->right, vec);
    }
};
