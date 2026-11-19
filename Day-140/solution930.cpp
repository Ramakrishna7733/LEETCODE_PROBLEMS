class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int ans=0,sum=0;
        unordered_map<int,int>freq;
        freq[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            ans+=freq[sum-goal];
            freq[sum]++;
        }
        return ans;
    }
};
