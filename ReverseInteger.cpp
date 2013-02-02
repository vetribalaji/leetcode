class Solution {
public:
    int reverse(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool neg=false;
        if(x<0)
        neg=true;
        if(neg)
        x*=-1;
        
        int res=0;
        while(x>0)
        {
            res*=10;
            res+=x%10;
            x/=10;
        }
        if(neg)
        res*=-1;
        return res;
    }
};
