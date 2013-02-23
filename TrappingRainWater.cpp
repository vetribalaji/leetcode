class Solution {
public:
    int trap(int a[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int res=0;
        if(n<3)
        return res;
        
        vector<int> bl(n,0);
        vector<int> br(n,0);
        
        int max=a[0];
        for(int i=1;i<n;i++)
        {
            bl[i]=max;
            if(a[i]>max)
            max=a[i];
        }
        max=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            br[i]=max;
            if(a[i]>max)
            max=a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            int p = min(bl[i],br[i]);
            if(p>a[i])
            {
                res+=p-a[i];
            }
        }
        return res;
    }
};
