class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int res=1;
        int n=s.length();
        if(n==0)
        return 0;
        
        vector<int> arr(26,0);
        int cross=0;
        
        int i=0, j=0;
        while(i<=j && j<n)
        {
            if(cross==0)
            {
                if(arr[s[j]-'a']==0)
                {
                    arr[s[j]-'a']=1;
                    int tmp=j-i+1;
                    if(tmp>res)
                    res=tmp;
                    j++;
                }
                else
                {
                    arr[s[j]-'a']++;
                    cross++;
                    j++;
                }
            }
            else
            {
                arr[s[i]-'a']--;
                if(arr[s[i]-'a']==1)
                cross--;
                i++;
            }
        }
        return res;
    }
};
