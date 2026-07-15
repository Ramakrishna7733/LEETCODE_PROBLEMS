class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

 int sum1 = 0, sum2 = 0, d;

        for (int i = 0; i < nums.size(); i++) {
            sum1 += nums[i];

            while (nums[i] > 9) {
                d = nums[i] % 10;
                sum2 += d;
                nums[i] /= 10;
            }

            sum2 += nums[i];
        }

        return abs(sum1 - sum2);  
    }
};
