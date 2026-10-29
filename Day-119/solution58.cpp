class Solution {
public:
    int lengthOfLastWord(string s) {
        int p1 =s.length() - 1;
        int l = 0;

        while (p1 >= 0 && s[p1] == ' ') {
            p1--;
        }

        while (p1 >= 0 && s[p1] != ' ') {
            l++;
            p1--;
        }

        return l;
    }
};
