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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > res;
        if(root==NULL)
        return res;
        
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;
        queue<TreeNode*> *pri;
        queue<TreeNode*> *sec;
        pri=&q1;
        sec=&q2;
        pri->push(root);
        
        int l=0;
        while(!pri->empty())
        {
            if(l%2==0)
            res.push_back(printQ(*pri, false));
            else
            res.push_back(printQ(*pri, true));
            
            while(!pri->empty())
            {
                if(pri->front()->left)
                sec->push(pri->front()->left);
                if(pri->front()->right)
                sec->push(pri->front()->right);
                pri->pop();
            }
            swap(pri,sec);
            l++;
        }
        return res;
    }
    vector<int> printQ(queue<TreeNode*> q,bool rev)
    {
        vector<int> res;
        while(!q.empty())
        {
            res.push_back(q.front()->val);
            q.pop();
        }
        if(rev)
        reverse(res.begin(), res.end());
        return res;
    }
    
};
