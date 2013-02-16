class Solution {
public:
    bool isValid(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{' )
            st.push(s[i]);
            else
            {
                if(st.empty())
                return false;
                if(s[i]==')')
                {
                    if(st.top()=='(')
                    st.pop();
                    else
                    return false;
                }
                if(s[i]==']')
                {
                    if(st.top()=='[')
                    st.pop();
                    else
                    return false;
                }
                if(s[i]=='}')
                {
                    if(st.top()=='{')
                    st.pop();
                    else
                    return false;
                }
            }
        }
        if(st.empty())
        return true;
        return false;
    }
};
