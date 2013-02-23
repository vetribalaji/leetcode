class Solution {
public:

    int recJump(int a[],int n, int cur, int c)
    {
        if(cur==(n-1))
        return c;
        
        if(cur>=n)
        return INT_MAX;
        
        int min=INT_MAX;
        for(int i=1;i<=a[cur];i++)
        {
            int s=recJump(a,n,cur+i, c+1);
            if(s<min)
            min=s;
        }
        return min;
    }
    int jump(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        return recJump(A,n,0,0);
    }
};
