class Solution {
public:
    void recSub(vector<int> &s, int cur, vector<vector<int> > &res, vector<int> &par)
    {
        if(cur>s.size())
        return;
        res.push_back(par);
        for(int i=cur;i<s.size();i++)
        {
            if(i!=cur && s[i]==s[i-1])
            continue;
            par.push_back(s[i]);
            recSub(s,i+1,res,par);
            par.pop_back();
        }
    }
    vector<vector<int> > subsetsWithDup(vector<int> &s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(s.begin(), s.end());
        vector<vector<int> > res;
        vector<int> par;
        recSub(s,0,res,par);
        return res;
    }
};
