class Solution {
public:
    int calculateScore(int a, int b) {
        int s1=0,s2=0;
        for(int i=0;i<31;i++)
        {
            if((a&(1<<i))!=0)
            {
                s1++;
            }
            if((b&(1<<i))!=0)
            {
                s2++;
            }
        }
        if(s1>=s2)
        {
            return s1*s2;
        }
        return s2/s1;
    }
};
