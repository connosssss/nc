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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;

        if(!root) return {};
        q.push(root);

        while(!q.empty()){
            int curSize = q.size();
            for(int i = 0; i<curSize-1; i++){
                TreeNode* temp = q.front();
                q.pop();    

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);

                
            }

            TreeNode* temp = q.front();
            q.pop(); 
            res.push_back(temp->val);


            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

        }

        return res;


        
    }
};
