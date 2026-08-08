class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        unordered_map<int, int>c;
        for(int i=0;i<n;i++)
        {
           c[nums[i]]++;
           if(c[nums[i]]>n/2)
           ans=nums[i];
        }
        return ans;
       
    }
};
