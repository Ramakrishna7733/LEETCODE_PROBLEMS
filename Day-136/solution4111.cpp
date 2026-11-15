class Solution {
public:
    int countConsistent(vector<int>& nums) {
       int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int minn=nums[i];
            int a=nums[i];
            for(int j=i;j<n;j++)
            {
                a=a&nums[j];
                minn=min(minn,nums[j]);
                if(a==minn)
                {
                    ans++;
                }
                
            }
            
        }
        return ans;
    }
};
