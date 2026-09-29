class Solution {
public:
    int findComplement(int num) {
    
    int ans=0;
    long long pos=1;
    while(num>0)
    {
        int binary=num%2;
        if(binary==0)
        {
            ans+=pos;
        }
        num/=2;
         pos*=2;
    }
    return ans;
    }
};
