class Solution {
public:
    string longestPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string s2=s;
        reverse(s2.begin(), s2.end());
        
        int n= s.length();
        if(n==1)
        return s;
        vector<int> tt(n+1, 0);
        vector< vector<int> > tab(n+1, tt);
        int max=0;
        int begin=0;
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(s[i-1]==s2[j-1] && s[i-1]==s[n-1-(j-1)])
                tab[i][j]=tab[i-1][j-1]+1;
                if(tab[i][j]>max)
                {
                    max=tab[i][j];
                    begin=i;
                }
            }
        }
        return s.substr(begin-max,max);
    }
};
