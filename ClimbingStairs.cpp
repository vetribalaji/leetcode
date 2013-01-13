class Solution {
public:
    int climbStairs(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        
        vector<int> steps(n);
        steps[0]=1;
        steps[1]=2;
        for(int i=2;i<n;i++)
        steps[i]=steps[i-1]+steps[i-2];
        
        return steps[n-1];
    }
};
