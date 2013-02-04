class Solution {
public:
    string comPrefix(string s1, string s2)
    {
        string res;
        int len=min(s1.length(), s2.length());
        int i=0;
        while(i<len && s1[i]==s2[i])
        {
            res.push_back(s1[i]);
            i++;
        }
        return res;
    }
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string res;
        int len=strs.size();
        if(len==0)
        return res;
        res=strs[0];
        for(int i=1;i<len;i++)
        {
            res=comPrefix(res,strs[i]);
        }
        return res;
    }
};
