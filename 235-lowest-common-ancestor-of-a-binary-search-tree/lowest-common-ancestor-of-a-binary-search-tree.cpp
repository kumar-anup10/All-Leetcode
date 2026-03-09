/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* find(TreeNode* &root, int a,int b)
    {
        if(!root)
        return NULL;
        // if(root->val>a && root->val<b)
        // return ;
        if(root->val>a && root->val>b)
        return find(root->left,a,b);
        else if(root->val<a && root->val<b)
        return find(root->right,a,b);
        else 
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int a=p->val,b=q->val;
        return find(root,a,b);
    }
};