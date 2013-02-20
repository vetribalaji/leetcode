class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &b) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        //Rows
        for(int i=0;i<9;i++)
        {
            vector<int> t(10,0);
            for(int j=0;j<9;j++)
            {
                if(b[i][j]=='.')
                continue;
                if(t[ b[i][j]-'0' ] ==1)
                return false;
                t[ b[i][j]-'0' ]=1;
            }
        }
        
        //Column
        for(int i=0;i<9;i++)
        {
            vector<int> t(10,0);
            for(int j=0;j<9;j++)
            {
                if(b[j][i]=='.')
                continue;
                if(t[ b[j][i]-'0' ] ==1)
                return false;
                t[ b[j][i]-'0' ]=1;
            }
        }
        
        //Box
        for(int i=0;i<9;i=i+3)
        {
            for(int j=0;j<9;j=j+3)
            {
                vector<int> t(10,0);
                for(int q=i;q<i+3;q++)
                {
                    for(int w=j;w<j+3;w++)
                    {
                        if(b[q][w]=='.')
                        continue;
                        if(t[ b[q][w]-'0' ] ==1)
                        return false;
                        t[ b[q][w]-'0' ]=1;
                    }
                }
            }
        }
        
        return true;
            
    }
};
