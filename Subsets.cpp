class Solution {
public:

    void rec(vector<int> &s,int cur, vector<vector<int> > &res, vector<int> &t)
    {
        int n=s.size();
        if(cur>n)
        return;
        res.push_back(t);
        for(int i=cur;i<n;i++)
        {
            t.push_back(s[i]);
            rec(s,i+1,res,t);
            t.pop_back();
        }
    }
    vector<vector<int> > subsets(vector<int> &s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(s.begin(),s.end());
        vector<vector<int> > res;
        vector<int> t;
        rec(s,0,res,t);
        return res;
    }
};
