class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx=0;
        int n=nums.size();

        for(int i=0;i<n;i++) {
            maxx=max(nums[i],maxx);
        }

        int ans=0;

        for(int i=0; i < n; i++) {
            ans+=maxx-nums[i];
        }

        return ans;
    }
};
