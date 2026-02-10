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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
            return nullptr;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
            return root;
        }
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
            return root;
        }
        else {
            // Case 1: No children
            if (!root->left && !root->right) {
                delete root;
                return nullptr;
            }

            // Case 2: Only left child
            if (root->left && !root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Case 3: Only right child
            if (!root->left && root->right) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // Case 4: Two children
            TreeNode* parent = root;
            TreeNode* pred = root->left;

            while (pred->right) {
                parent = pred;
                pred = pred->right;
            }

            if (parent != root)
                parent->right = pred->left;
            else
                parent->left = pred->left;

            pred->left = root->left;
            pred->right = root->right;

            delete root;
            return pred;
        }

        return root;
    }
};