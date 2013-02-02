class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function    
        if(*p=='\0')
        return *s==*p;
        
        if(*(p+1)=='\0' || *(p+1)!='*')
        {
            if(*s!='\0' && (*p=='.' || *p==*s))
            {
                return isMatch(s+1, p+1);
            }
            else
            return false;
        }
        else
        {
            if(isMatch(s, p+2))
            return true;
            
            while(*s!='\0' && (*p=='.' || *p==*s))
            {
                if(isMatch(s+1, p+2))
                return true;
                s++;
            }
            return isMatch(s, p+2);
        }
    }
};
