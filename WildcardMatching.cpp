class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(*p=='\0')
        return *s==*p;
        
        if(*p!='*')
        {
            if(*s!='\0' && (*p=='?' || *p==*s))
            return isMatch(s+1, p+1);
            return false;
        }
        else
        {
            while(true)
            {
                if(isMatch(s,p+1))
                return true;
                if(*s=='\0')
                break;
                s++;
            }
            return false;
        }
    }
};
