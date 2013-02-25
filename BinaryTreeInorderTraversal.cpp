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
    vector<int> inorderTraversal(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        TreeNode *cur=root;
        stack<TreeNode *> st;
        vector<int> res;
        bool done=false;
        while(!done)
        {
            if(cur!=NULL)
            {
                st.push(cur);
                cur=cur->left;
                continue;
            }
            if(!st.empty())
            {
                cur=st.top();
                st.pop();
                res.push_back(cur->val);
                cur=cur->right;
            }
            else
            done=true;
        }
        return res;
    }
};
