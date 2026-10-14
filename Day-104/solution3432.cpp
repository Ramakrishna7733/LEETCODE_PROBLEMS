class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
       int totsum=0;
      for(int i=0;i<n;i++)
      {
        totsum+=nums[i];
      }
      int leftsum=0;
      int c=0;
      for(int i=0;i<n-1;i++)
      {
        leftsum+=nums[i];
        int rightsum=totsum-leftsum;
        if((leftsum%2)==(rightsum%2))
        c++;
      }
      return c;
    }
};
