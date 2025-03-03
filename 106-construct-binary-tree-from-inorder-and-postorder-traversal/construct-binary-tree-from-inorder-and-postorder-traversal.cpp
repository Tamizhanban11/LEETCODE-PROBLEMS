class Solution {
public:
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return bld(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1);
    }
    
    TreeNode* bld(vector<int>&inorder, vector<int>&postorder, int istart, int iend,
                  int pstart,int pend){
        if(istart > iend || pstart > pend)
            return NULL;
        int val = postorder[pend];
        
        int i = istart;
        while(inorder[i] != val) i++;

        TreeNode* root = new TreeNode(val);
        root->left = bld(inorder, postorder, istart, i-1, pstart, pstart+i-istart-1);
        root->right = bld(inorder, postorder, i+1, iend, pend-(iend-i), pend-1);
        return root;
    }
};