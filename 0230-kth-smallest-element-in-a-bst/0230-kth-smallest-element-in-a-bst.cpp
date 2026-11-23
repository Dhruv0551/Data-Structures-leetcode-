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
    int ans;
    int count = 0;

    void helper(TreeNode* root, int k)
    {
        if(!root) return;
        // static int count = 0;

        helper(root->left, k);
        count++;
        if(count == k) {ans = root->val; 
        return;}
        if(k > count) helper(root->right, k);

    }

    int kthSmallest(TreeNode* root, int k) {
        helper(root, k);

        return ans;
    }
};