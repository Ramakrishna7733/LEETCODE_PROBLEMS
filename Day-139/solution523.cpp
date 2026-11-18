class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
       unordered_map<int,int>mapp;
       mapp[0]=-1;
       for(int i=0;i<n;i++)
       {
        sum+=nums[i];
        int r=sum%k;
        if(mapp.find(r)!=mapp.end())
        {
            if(i-mapp[r]>=2)
            {
                return true;
            }
        }
        else
        {
            mapp[r]=i;
        }
       }
       return false;
    }
};
