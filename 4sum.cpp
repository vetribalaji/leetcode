class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int t) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(num.begin(), num.end());
        int s = num.size();
        vector<vector<int> > res;
        for(int i=0;i<s;i++)
        {
            for(int j=i+1; j<s;j++)
            {
            int p1=j+1;
            int p2=s-1;
            while(p1<s && p2>i && p1<p2)
            {
                int sum = num[i]+num[j]+num[p1] + num[p2];
                if(sum==t)
                {
                    vector<int> tmp_res;
                    tmp_res.push_back(num[i]);
                    tmp_res.push_back(num[j]);
                    tmp_res.push_back(num[p1]);
                    tmp_res.push_back(num[p2]);
                    res.push_back(tmp_res);
                    p1++;
                    p2--;
                }
                else if(sum<t)
                p1++;
                else
                p2--;
            }
            }
        }
        sort(res.begin(),res.end());
        vector<vector<int> >::iterator it = unique(res.begin(),res.end());
        res.resize(it-res.begin());
        return res;
    }
};
