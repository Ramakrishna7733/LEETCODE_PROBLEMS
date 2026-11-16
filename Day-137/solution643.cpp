class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int i=0,j=0;
        int sum=0;
        while(j<k)
        {
            sum+=nums[j];
            j++;
        }
        int maxsum=sum;
        while(j<n)
        {
            sum+=nums[j];
            sum-=nums[i];
            maxsum=max(sum,maxsum);
          i++;
          j++;

        }
        return double(maxsum)/k;
    }
};
