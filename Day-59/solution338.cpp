class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>ans(n+1);
     for(int i=0;i<=n;i++)
     {
       int num=i;
       int c=0;
       while(num>0)
       {
        c+=num&1;
        num=num>>1;
       }
       ans[i]=c;
     }   
     return ans;
    }
};
