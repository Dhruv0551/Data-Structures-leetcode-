class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrder;
        if(!root) return inOrder;

        stack<TreeNode*> st;

        while(!st.empty() || root)
        {
            while(root)
            {
                st.push(root);
                root = root->left;
            }

            root = st.top();
            st.pop();
            inOrder.push_back(root->val);

            root = root->right;
        }

        return inOrder;

    }
};