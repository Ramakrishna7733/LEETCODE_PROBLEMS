class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ni;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                ni.push_back(0);
            }
            else
            {
                ni.push_back(1);
            }
        
        }
        sort(ni.begin(),ni.end());
        return ni;
    }
};
