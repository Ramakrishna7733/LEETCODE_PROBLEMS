class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(char stone:stones)
        {
            for(char jewel:jewels)
            {
                if(stone==jewel)
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
