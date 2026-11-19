class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         int n=nums.size();
        int ans=0,sum=0;
        unordered_map<int,int>mapp;
        mapp[0]=1;
        for(int i=0;i<n;i++)
        {
          sum+=nums[i]%2;
          ans+=mapp[sum-k];
          mapp[sum]++;
        }
        return ans;
    }
};
