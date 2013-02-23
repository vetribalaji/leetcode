class Solution {
public:
    double pow(double x, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n==0)
        return 1;

        bool neg=false;
        if(n<0)
        {
            neg=true;
            n*=-1;
        }
        
        double half = pow(x,n/2);
        double res=half*half;
        if(n%2==1)
        res*=x;
        
        if(neg)
        return 1/res;
        else
        return res;
    }
};
