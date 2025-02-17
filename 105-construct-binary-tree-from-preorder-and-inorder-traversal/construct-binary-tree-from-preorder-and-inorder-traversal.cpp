class Solution {
public:
    unordered_map<int, int> inorder_map;
    TreeNode* buildTreeHelper(vector<int> &preorder, int &preIndex, int left, int right) {
        if (left > right) return nullptr; 
        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);
        int inorderIndex = inorder_map[rootVal];
        root->left = buildTreeHelper(preorder, preIndex, left, inorderIndex - 1);
        root->right = buildTreeHelper(preorder, preIndex, inorderIndex + 1, right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        inorder_map.clear();
        for (int i = 0; i < n; i++) {
            inorder_map[inorder[i]] = i;
        }
        int preIndex = 0;
        return buildTreeHelper(preorder, preIndex, 0, n - 1);
    }
};