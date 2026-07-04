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
    bool res = true;
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
          if((!p && q) || (!q && p)) {
            res= false; 
            return false;
            }
          if(!p && !q) return true;
          if(p->val != q->val) {
            
            res = false; return false;
            }

          isSameTree(p->right, q->right); 
          isSameTree(q->left, p->left);

          return res;

    }
};
