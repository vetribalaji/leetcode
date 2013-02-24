class Solution {
public:
    int removeDuplicates(int a[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n<=2)
        return n;
        
        int pre=a[0];
        int cur;
        bool seen=false;
        int res=1;
        for(int i=1;i<n;i++)
        {
            cur=a[i];
            if(!seen)
            {
                if(pre==cur)
                seen=true;
                a[res]=cur;
                res++;
            }
            else 
            {
                if(pre!=cur)
                {
                    seen=false;
                    a[res]=cur;
                    res++;
                }
            }
            pre=cur;
        }
        return res;
    }
};
