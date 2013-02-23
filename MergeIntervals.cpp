/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
 bool compare(Interval in1, Interval in2)
    {
        if(in1.start!=in2.start)
        return in1.start<in2.start;
        
        return in1.end<in2.end;
        
    }
class Solution {
public:
    

    vector<Interval> merge(vector<Interval> &in) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<Interval> res;
        int n=in.size();
        if(n==0)
        return res;
        
        sort(in.begin(), in.end(), compare);
        
        Interval tmp=in[0];
        
        for(int i=1;i<n;i++)
        {
            if(in[i].start<=tmp.end)
            {
                if(tmp.end<in[i].end)
                tmp.end=in[i].end;
            }
            else
            {
                res.push_back(tmp);
                tmp=in[i];
            }
        }
        res.push_back(tmp);
        return res;
        
    }
};
