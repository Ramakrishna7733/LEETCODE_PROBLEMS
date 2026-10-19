class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int p=0,ne=0,z=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                p++;
            }
            else if(nums[i]<0)
            {
                ne++;
            }
            else
            {
                z++;
            }
        }
        return max(p,ne);
    }
};
