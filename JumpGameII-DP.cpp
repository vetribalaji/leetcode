class Solution {
public:

    int jump(int a[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> s(n, INT_MAX);
        s[0]=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=a[i]&&(i+j)<n;j++)
            {
                if(s[i+j]>s[i]+1)
                s[i+j]=s[i]+1;
            }
        }
        return s[n-1];
    }
};
