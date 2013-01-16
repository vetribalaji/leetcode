class Solution {
public:
    int minimumTotal(vector<vector<int> > &t) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n = t.size();
        vector<int> tmp(n, -1);
        vector<vector<int> > memo(n, tmp);
        
        return minTot(t,0,0,memo);
    }
    
    int minTot(vector<vector<int> > &t, int i, int j, vector<vector<int> > &memo)
    {
        int n=t.size();
        if(i>=n || j>=n)
        return 0;
        
        if(memo[i][j]!=-1)
        return memo[i][j];
        
        int left,right;
        
        left=minTot(t, i+1, j, memo);
        right=minTot(t, i+1, j+1, memo);
        
        int sum = min(left, right)+ t[i][j];
        memo[i][j]=sum;
        return sum;
    }
};
