class Solution {
public:
    int totalMoney(int n) {
        int c = n / 7;
        int t = n % 7;

        int s = 28 * c + 7 * c * (c - 1) / 2;

        for (int i = 1; i <= t; i++) {
            s +=c+i;
        }

        return s;
    }
};
