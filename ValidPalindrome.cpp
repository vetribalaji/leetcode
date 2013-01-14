class Solution {
public:
    bool isPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string::iterator it = s.begin();
        while(it!=s.end())
        {
            if(!( (*it>='a'&&*it<='z') || (*it>='A'&&*it<='Z') || (*it>='0'&&*it<='9') ) )
            {
            s.erase(it);
            continue;
            }
            
            it++;
        }
        
        string s2=s;
        reverse(s2.begin(), s2.end());
        
        if(s.compare(s2)==0)
        return true;
        else
        return false;
    }
};
