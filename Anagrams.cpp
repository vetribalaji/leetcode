class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<string> res;
        map<string, vector<string> > dict;
        map<string, vector<string> >::iterator it;
        int s = strs.size();
        for(int i=0;i<s;i++)
        {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            it = dict.find(tmp);
            if(it==dict.end())
            {
                vector<string> tmpp;
                tmpp.push_back(strs[i]);
                dict.insert( pair<string, vector<string> >(tmp, tmpp));
            }
            else
            {
                it->second.push_back(strs[i]);
            }
        }
        for(it=dict.begin(); it!=dict.end(); it++)
        {
            if(it->second.size()>1)
            {
                res.insert(res.end(),it->second.begin(),it->second.end());
            }
        }
        return res;
    }
};
