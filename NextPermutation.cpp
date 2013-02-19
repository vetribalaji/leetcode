class Solution {
public:
    void nextPermutation(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int l=num.size();
        int max=-1;
        for(int i=0;i<l-1;i++)
        {
            if(num[i]<num[i+1])
            {
                max=i;
            }
        }
        
        if(max==-1)
        {
            sort(num.begin(), num.end());
            return;
        }
        
        int ll;
        for(int i=max+1;i<l;i++)
        {
            if(num[max]<num[i])
            ll=i;
        }
        swap(num[max],num[ll]);
        reverse(num.begin()+max+1, num.end());
    }
};
