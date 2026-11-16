class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long long sum=0,maxsum=0;
        int i=0,j=0;

unordered_map<int,int>mapp;
        while(j<k)
        {
            sum+=nums[j];
            mapp[nums[j]]++;
            j++;
        }
        if(mapp.size()==k)
        {
      maxsum=sum;
        }
        
        while(j<n)
        {
            sum+=nums[j];
            mapp[nums[j]]++;
            sum-=nums[i];
            mapp[nums[i]]--;
            if(mapp[nums[i]]==0)
            {
                mapp.erase(nums[i]);
            }
           if(mapp.size()==k)
           {
            maxsum=max(sum,maxsum);
           }
            i++;
            j++;
        }
        return maxsum;
    }
};
