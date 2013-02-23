class Solution {
public:
    int lengthOfLastWord(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int i=0;
        int res=0;
        int pre=0;
        while(*(s+i)!='\0')
        {
            if(*(s+i)==' ')
            {
                if(res!=0)
                pre=res;
                res=0;
            }
            else
            res++;
            i++;
        }
        if(res!=0)
        return res;
        else
        return pre;
    }
};
