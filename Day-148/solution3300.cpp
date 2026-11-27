class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> val;
        
        for(int i=0;i < nums.size(); i++) {
            int sum=0; 
            int n=nums[i];
            
            while(n>0) { 
                sum+=n%10;
                n /= 10;
            }
            val.push_back(sum);
        }
        return *min_element(val.begin(), val.end());
    }
};
