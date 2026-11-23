/**
 * Definition for a binary tree TreeNode.
 * struct TreeTreeNode {
 *     int val;
 *     TreeTreeNode *left;
 *     TreeTreeNode *right;
 *     TreeTreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeTreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeTreeNode(int x, TreeTreeNode *left, TreeTreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    if(!root) return {};
    queue<TreeNode *> q;
    q.push(root);
    vector<vector<int>> ans;
    while (!q.empty()) {
      vector<int> temp;
      int n = q.size();
      for (int i = 0; i < n; i++) {
        TreeNode *front = q.front();
        q.pop();

        temp.push_back(front->val);

        if (front->left)
          q.push(front->left);
        if (front->right)
          q.push(front->right);
      }
      ans.push_back(temp);
    }
    return ans;
    }
};