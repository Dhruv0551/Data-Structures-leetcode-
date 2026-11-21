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

    TreeNode* makeTree(vector<int> &nums, int stIdx, int endIdx)
    {
        if(stIdx > endIdx) return nullptr;

        int mid = stIdx + (endIdx - stIdx) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        
        root->left = makeTree(nums, stIdx, mid - 1);
        root->right = makeTree(nums, mid + 1, endIdx);

        return root;
    }


    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = size(nums) - 1;
        return makeTree(nums, 0, n);
    }


};