class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int s=prices.size();
        if(s==0)
        return 0;
        
        int min = prices[0];
        int pro = 0;
        for(int i=1;i<s;i++)
        {
            if(prices[i]-min>pro)
            {
                pro=prices[i]-min;
            }
            if(prices[i]<min)
            min=prices[i];
        }
        return pro;
    }
};
