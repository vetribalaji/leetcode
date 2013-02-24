class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &o) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int r=o.size();
        if(r==0)
        return 0;
        int c=o[0].size();
        vector<int> tt(c+1,0);
        vector<vector<int> > w(r+1,tt);
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(o[i-1][j-1]==1)
                continue;
                if(i==1 && j==1)
                {
                    w[i][j]=1;
                    continue;
                }
                w[i][j]=w[i-1][j]+w[i][j-1];
            }
        }
        return w[r][c];
    }
};
