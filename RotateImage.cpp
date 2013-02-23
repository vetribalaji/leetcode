class Solution {
public:
    void swap4(int &a, int &b, int &c, int &d)
    {
        int t=a;
        a=d;
        d=c;
        c=b;
        b=t;
    }
    void layerR(vector<vector<int> > &m, int a, int b)
    {
        int n=b-a;
        for(int i=0;i<n;i++)
        {
            swap4(m[a][a+i], m[a+i][b],
            m[b][b-i], m[b-i][a]);
        }
    }
    void rotate(vector<vector<int> > &m) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int n=m.size();
        for(int i=0;i<n/2;i++)
        layerR(m,i,n-1-i);
    }
};
