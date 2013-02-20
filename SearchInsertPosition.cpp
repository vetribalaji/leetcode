class Solution {
public:
    int searchInsert(int a[], int n, int t) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]==t)
            return i;
            if(a[i]>t)
            return i;
        }
        return i;
    }
};
