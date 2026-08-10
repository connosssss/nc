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
    pair<int, int> tracker {1001, -1001};
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        
        return dfs(root->left, -1001, root->val) && dfs(root->right, root->val, 1001);
    }

    bool dfs(TreeNode* node, int min, int max){
        if(!node) return true;

        if(node->val >= max || node->val <= min) return false;

        return dfs(node->left, min, node->val ) && dfs(node->right,node->val ,max );
        
    }
    
};
