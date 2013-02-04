class Solution {
public:
    int rBinSearch(int a[],int s, int e,int t)
    {
        if(s>e)
        return -1;

        int mid=(s+e)/2;
        
        if(a[mid]==t)
        return mid;
        
        if(a[s]<=a[mid])
        {
            if(t>=a[s] && t<a[mid])
            return rBinSearch(a,s,mid-1,t);
            else
            return rBinSearch(a,mid+1,e,t);
        }
        else
        {
            if(t<=a[e] && t>a[mid])
            return rBinSearch(a,mid+1,e,t);
            else
            return rBinSearch(a,s,mid-1,t);
        }
        
        return -1;
    }
    int search(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        return rBinSearch(A,0,n-1,target);
    }
};
