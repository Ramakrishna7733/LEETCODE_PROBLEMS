class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> prefprod(n, 1);
        vector<int> sufprod(n, 1);
        vector<int> ans(n);

        for(int i = 1; i < n; i++)
        {
            prefprod[i] = prefprod[i-1] * nums[i-1];
        }

        for(int i = n-2; i >= 0; i--)
        {
            sufprod[i] = sufprod[i+1] * nums[i+1];
        }

        for(int i = 0; i < n; i++)
        {
            ans[i] = prefprod[i] * sufprod[i];
        }

        return ans;
    }
};
