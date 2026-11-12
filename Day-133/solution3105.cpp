class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int in=1,de=1,ans=1;
        for(int i=1;i<nums.size();i++)
        {
          
                if(nums[i]>nums[i-1])
                {
                    in++;
                    de=1;
                }
                else if(nums[i]<nums[i-1])
                {
                    de++;
                    in=1;
                }
                else
                {
                    de=1;
                    in=1;
                    
                }
        ans=max(ans,max(in,de));
        }
        return ans;
    }
};
