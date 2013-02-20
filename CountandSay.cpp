class Solution {
public:
    string countAndSay(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        string str="1";
        
        for(int i=1;i<n;i++)
        {
            str=convert(str);
        }
        return str;
    }
    
    string convert(string str)
    {
        string s2;
        int l=str.length();
        for(int i=0;i<l;i++)
        {
            char t=str[i];
            int tt=1;
            int j=i+1;
            while(t==str[j])
            {
                j++;
                tt++;
            }
            s2.push_back(tt+'0');
            s2.push_back(t);
            i=j-1;
        }
        return s2;
    }
};
