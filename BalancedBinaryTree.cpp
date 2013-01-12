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
public:
    bool isBalanced(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool res;
        height(root, res);
        return res;
    }
    int height(TreeNode *node, bool &bal)
    {
        if(node==NULL)
        {
            bal=true;
            return 0;
        }
        
        bool left=true;
        bool right=true;
        
        int left_h = height(node->left, left);
        int right_h = height(node->right, right);
        
        if( !(left && right))
        {
            bal=false;
            return 0;
        }
        else
        bal = true;
        
        if(abs(left_h-right_h)>1)
        {
            bal=false;
            return 0;
        }
        else
        {
            return max(left_h, right_h)+1;
        }
    }
    
    int abs(int num)
    {
        if(num>=0)
        return num;
        else
        return num*-1;
    }
};
