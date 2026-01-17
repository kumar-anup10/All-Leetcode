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
    int find(TreeNode* r,int target,int &timer)
    {
        if(r==NULL)
        return 0;
        if(r->val==target)
        return -1;
        int left=find(r->left,target,timer);
        int right=find(r->right,target,timer);
        
        if(left<0)
        {
            timer=max(timer,abs(left)+right);
            return left-1;
        }
        if(right<0)
        {
            timer=max(timer,abs(right)+left);
            return right-1;
        }
        return 1+max(right,left);
    }
    void findburingNode(TreeNode* r, int target,TreeNode* &burn)
    {
        if(!r)
        return;
        if(r->val==target)
        {
            burn=r;
            return;
        }
        findburingNode(r->left,target,burn);
        findburingNode(r->right,target,burn);
    }
    int findHeight(TreeNode* burn)
    {
        if(burn==NULL)
        return 0;
        return 1+max(findHeight(burn->left),findHeight(burn->right));
    }
    int amountOfTime(TreeNode* root, int target) {
        int timer=0;
        find(root,target,timer);
        
        TreeNode* burn=NULL;
        findburingNode(root,target,burn);
        int height=findHeight(burn);
        return max(height-1,timer);
    }
};