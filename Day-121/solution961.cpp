class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int>freq;
        int f=0;
       for(int x:nums)
       {
        freq[x]++;
       
       if(freq[x]==n/2)
       return x;
       }
    
    return -1;
    }
};
