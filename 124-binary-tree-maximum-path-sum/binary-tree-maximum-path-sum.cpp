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
    int maxsum(TreeNode* root, int &sum)
    {
        if (!root)
            return 0;

        int left = maxsum(root->left, sum);
        int right = maxsum(root->right, sum);

        // Ignore negative paths
        left = max(0, left);
        right = max(0, right);

        // Update global maximum at every node
        sum = max(sum, root->val + left + right);

        // Return best downward path
        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        maxsum(root, sum);
        return sum;
    }
};