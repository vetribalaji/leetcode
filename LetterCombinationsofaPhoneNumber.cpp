class Solution {
    
public:
    vector<string> letterCombinations(string digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        char* dig[]={" ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> let(dig, dig+10);
        vector<string> res;
        string str;
        recLetComb(digits,0,res,str,let);
        return res;
    }
    
    void recLetComb(string d, int i, vector<string> &res, string & str,vector<string> &let)
    {
        if(i==d.length())
        {
            res.push_back(str);
            return;
        }
        
        string dig=let[d[i]-'0'];
        for(int j=0;j<dig.length();j++)
        {
            str.push_back(dig[j]);
            recLetComb(d,i+1,res,str,let);
            str.pop_back();
        }
    }
};
