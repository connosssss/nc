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
    int goodNodes(TreeNode* root) {
        
        return dfs(root, -101);
    }

    int dfs(TreeNode* node, int maxVal){
        if(!node) return 0;
        //cout<< node->val<<" max"<<maxVal<<endl;

        int addOn {};
        if(node->val >= maxVal){
            addOn = dfs(node->left, node->val) + dfs(node->right, node->val);
            return 1 + addOn;
        }

        addOn = dfs(node->left, maxVal) + dfs(node->right, maxVal);
        

        return addOn;
        
    }
};
