class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        set<int> ni(nums.begin(), nums.end());
        int sum = 0;

        for (int x : ni) {
            int count = 0;

            for (int y : nums) {
                if (x == y) {
                    count++;
                }
            }

            if (count == 1) {
                sum += x;
            }
        }

        return sum;
    }
};
