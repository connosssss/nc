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
    bool res = false;
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot ^ !root) return true;
        
        if(!root && !subRoot) return res;
        if(root->val == subRoot->val){
            res = searchSubroot(root, subRoot);
            if(res) return res;
        }

        isSubtree(root->left, subRoot);
        isSubtree(root->right, subRoot);

        
        

        return res;
    }

    bool searchSubroot(TreeNode* searchingNode, TreeNode* subRoot){
        if(!searchingNode ^ !subRoot) return false;
        if(!searchingNode && !subRoot) return true;

        if(searchingNode->val != subRoot->val) {
            return false;
        };
        return searchSubroot(searchingNode->left, subRoot->left) && 
        searchSubroot(searchingNode->right, subRoot->right);


    }
};
