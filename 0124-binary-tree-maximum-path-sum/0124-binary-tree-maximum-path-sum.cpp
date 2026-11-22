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

    int getSum(TreeNode* root, int &maxi)
    {
        if(!root) return 0;

        int leftRoot = max(0, getSum(root->left, maxi));
        int rightRoot = max(0, getSum(root->right, maxi));

        maxi = max(maxi, root->val + leftRoot + rightRoot);

        return root->val + max(leftRoot, rightRoot);
    }




    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        getSum(root, maxi);

        return maxi;
    }
};