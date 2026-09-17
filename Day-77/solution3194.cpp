class Solution {
public:
    double minimumAverage(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      double minn=1e9;
     int i=0,j=n-1;
     while(i<j)
     {
       double ans=(nums[i]+nums[j])/2.0;
          minn=min(minn,ans);
        i++;
       j--;

    
      
     }
     return minn;
    }
};
