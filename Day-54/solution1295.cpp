class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int mc=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
             int c=0;
        while(nums[i]>0)
        {
            c++;
            
          nums[i]/=10;
        }
        if(c%2==0)
        {
          mc++;
        }
        }
        return mc;
    }
};
