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
    int diameterOfBinaryTree(TreeNode* root) {
        int max {0};
        dfs(root, max);
        return max;
    }

    int dfs(TreeNode* node, int& max){
        if(!node) return 0;
        int right {dfs(node->right, max)};
        int left {dfs(node->left, max)};
        int d = right + left;
        max = std::max(d, max);
        return 1 + std::max(left, right);
    }
};
