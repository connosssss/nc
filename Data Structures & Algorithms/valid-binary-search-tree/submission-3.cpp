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
        
        
        return dfs(root->left, root->val, true) && dfs(root->right, root->val, false);
    }

    bool dfs(TreeNode* node, int pVal, bool isLeft){
        if(!node) return true;

        if(isLeft){
            if(node->val >= pVal) return false;
            if(node->val >= tracker.first) return false;
            tracker.first = node->val;

        }
        else{
            if(node->val <= pVal) return false;
            if(node->val <= tracker.second) return false;
            tracker.second = node->val;
        }
        
        cout<<tracker.first<< " " << tracker.second << " | ";

        return dfs(node->left, node->val, true) && dfs(node->right, node->val, false);
        
    }
    
};
