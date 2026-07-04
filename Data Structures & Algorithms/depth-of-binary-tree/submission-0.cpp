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
    int helper(TreeNode* root){
        int left {0};
        int right {0};
        if(root->left){
            left += helper(root->left);
        }
        if(root->right){
            right += helper(root->right);
        }
        

        return std::max(left, right) + 1;
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return helper(root);

    }
};
