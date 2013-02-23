class Solution {
public:
    void recPer(vector<int> &num,int cur, vector<vector<int> > &res)
    {
        if(cur==num.size()-1)
        {
            res.push_back(num);
            return;
        }
        
        int n=num.size();
        for(int i=cur;i<n;i++)
        {
            swap(num[i],num[cur]);
            recPer(num,cur+1,res);
            swap(num[i],num[cur]);
        }
    }
    vector<vector<int> > permute(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > res;
        recPer(num,0,res);
        return res;
    }
};
