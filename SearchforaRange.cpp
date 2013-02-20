class Solution {
public:
    vector<int> searchRange(int a[], int n, int t) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int min=-1, max=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==t)
            {
                if(min==-1)
                min=i;
                if(max<i)
                max=i;
            }
            else if(a[i]>t)
            break;
        }
        vector<int> res(2);
        res[0]=min;
        res[1]=max;
        return res;
    }
};
