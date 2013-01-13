/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int maxSum;
public:
    int maxPathSum(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        maxSum=INT_MIN;
        maxPath(root);
        return maxSum;
    }
    int maxPath(TreeNode *node)
    {
        if(node==NULL)
        return 0;
        
        int left=maxPath(node->left);
        int right=maxPath(node->right);
        
        int m=max(right+ node->val, left+ node->val);
        m=max(m, left+ right+ node->val);
        m=max(m,node->val);
        if(maxSum<m)
        maxSum = m;
        
        
        return max(max(left,right)+node->val,node->val);
    }
};
