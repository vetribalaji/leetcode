class Solution {
public:
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        bool neg=false;
        
        while(*str==' ')
        str++;
        
        if(*str<'0' || *str>'9')
        {
            if(!(*str=='-' || *str=='+'))
            return 0;
            
            if(*str=='-')
            neg=true;
            str++;
        }
         long long res=0;
         while(*str!='\0')
         {
             if(*str<'0' || *str>'9')
             break;
             res*=10;
             res+=((*str)-'0');
             str++;
         }
         
         if(neg)
         res*=-1;
         
         if(res>INT_MAX)
         return INT_MAX;
         if(res<INT_MIN)
         return INT_MIN;
         return res;
    }
};
