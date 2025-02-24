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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> values;
        function<void(TreeNode*)> traverse = [&](TreeNode* node) {
            if (!node) return;
            values.push_back(node->val);
            traverse(node->left);
            traverse(node->right);
        };
        
        traverse(root); // Traverse the tree
        sort(values.begin(), values.end()); // Sort the values
        return values[k - 1]; // Return the k-th smallest element (1-indexed)
    }
        
    
};