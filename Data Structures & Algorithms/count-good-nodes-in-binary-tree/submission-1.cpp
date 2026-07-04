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
    int count {1};

    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        
        int max {root->val};

        dfs(root->left, max);
        dfs(root->right, max);


        return count;
        
    }

    void dfs(TreeNode* node, int max){
        if(!node) return;
        if(node->val >= max){
            count++; max = node->val;
        }
        
        dfs(node->right, max);
        dfs(node->left,max);
    }
};
