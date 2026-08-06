class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
       int n=nums.size();
       int val=0;
      
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        nums.resize(n,0);

      
    }
};
