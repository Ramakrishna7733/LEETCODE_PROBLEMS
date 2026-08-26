class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            int c=0;
            int temp=i;
            while(temp)
            {
                if(temp%2==1)
                {
                    c++;
                }
                    temp>>=1;
                
            }
                if(c==k)
                {
                    s+=nums[i];
                }
            

        }
        return s;
    }
};
