class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int maxx=INT_MIN,minn=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            maxx=max(maxx,nums[i]);
            minn=min(minn,nums[i]);
        }
        for(int i=minn;i<=maxx;i++)
        {
           ans.push_back(i);
        }
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<ans.size();j++)
        {
            if(nums[i]==ans[j])
            {
                ans.erase(ans.begin()+j);
            }
        }
    }

        return ans;

    }
};
