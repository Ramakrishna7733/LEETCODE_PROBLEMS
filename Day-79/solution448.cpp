class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>ni(nums.begin(),nums.end());
        vector<int>ne;
        for(int i=1;i<=nums.size();i++)
        {
            if(ni.find(i)==ni.end())
            {
              ne.push_back(i);
            }
        }
        return ne;
    }
};
