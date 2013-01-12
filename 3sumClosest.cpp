class Solution {
public:
    int threeSumClosest(vector<int> &num, int t) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(num.begin(), num.end());
        int minDiff = INT_MAX;
        int s = num.size();
        for(int i=0;i<s;i++)
        {
            int p1=i+1;
            int p2 = s-1;
            while(p1<s && p2>i && p1<p2)
            {
                int sum = num[i]+ num[p1]+ num[p2];
                if(sum==t)
                {
                    minDiff=0;
                    break;
                }
                if( abs(minDiff)>abs(t-sum) )
                {
                    minDiff = t-sum;
                }
                if(sum<t)
                p1++;
                else
                p2--;
            }
            if(minDiff==0)
            break;
        }
        return t-minDiff;
    }
    
    int abs(int num)
    {
        if(num>0)
        return num;
        else
        return num*-1;
    }
};
