class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* temp = root;
        TreeNode* prev = nullptr;

        while (temp && temp->val != key) {
            prev = temp;
            if (key < temp->val) {
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }

        if (!temp) return root;

        TreeNode* left = temp->left;
        TreeNode* right = temp->right;
        TreeNode* replacement = nullptr;

        if (!left && !right) {
            replacement = nullptr;
        } 

        else if (!left) {
            replacement = right;
        } 
        else if (!right) {
            replacement = left;
        } 
        else {
            TreeNode* curr = right;
            while (curr->left) {
                curr = curr->left;
            }
            curr->left = left;
            replacement = right;
        }

        if (!prev) {
            delete temp;
            return replacement;
        }

        if (prev->left == temp) {
            prev->left = replacement;
        } 
        else {
            prev->right = replacement;
        }

        delete temp;
        return root;
    }
};