class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0,ans=0;
        unordered_map<int,int>freq;
        freq[0]=1;
        for(int i=0;i<n;i++)
        {
           sum+=nums[i];
           ans+=freq[sum-k];
           freq[sum]++;
        }
        return ans;
    }
};
