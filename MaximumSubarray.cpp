class Solution {
public:
    int maxSubArray(int a[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int max=INT_MIN;
        int tmp=0;
        for(int i=0;i<n;i++)
        {
            tmp+=a[i];
            if(tmp>max)
            max=tmp;
            if(tmp<0)
            tmp=0;
        }
        return max;
    }
};
