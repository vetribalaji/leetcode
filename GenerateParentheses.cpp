class Solution {
public:
    vector<string> generateParenthesis(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> res;
        string str;
        recGen(n,0,0,str,res);
        return res;
    }
    void recGen(int n, int open, int close, string &str, vector<string> &res)
    {
        if(open==close && open==n)
        {
            res.push_back(str);
            return;
        }
        
        if(n>open)
        {
            str.push_back('(');
            recGen(n, open+1, close, str, res);
            str.pop_back();
        }
        
        if(open>close)
        {
            str.push_back(')');
            recGen(n, open, close+1, str, res);
            str.pop_back();
        }
    }
};
