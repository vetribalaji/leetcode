class Solution {
public:
    vector<int> twoSum(vector<int> &num, int t) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> res(2,0);
        int si=num.size();
        for(int i=0;i<si;i++)
        {
            for(int j=i+1;j<si;j++)
            {
                int s=num[i]+num[j];
              if(s==t)
              {
                  res[0]=i+1;
                  res[1]=j+1;
                  return res;
              }
            }
        }
        return res;
    }
};
