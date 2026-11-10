class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0,n=nums.size();
        int temp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                temp=nums[i];
                nums[i]=nums[l];
                nums[l]=temp;
                l++;
            }
        }
        return nums;
    }
};
