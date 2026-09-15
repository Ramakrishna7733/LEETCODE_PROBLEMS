class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n=nums.size();
       int fmax=0,smax=0;
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++)
       {
        fmax=max(fmax,nums[i]);
       }
       for(int j=0;j<n-1;j++)
       {
        smax=max(smax,nums[j]);
       }
        
        return (fmax-1)*(smax-1);
    }
};
