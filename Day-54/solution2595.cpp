class Solution {
public:
    vector<int> evenOddBit(int n) {
        int c=1,even=0,odd=0;
        while(n>0)
        {
           int a=n&1;
           c++;
           if(a==1)
           {
            if(c%2==0)
            {
            even++;
            }
            else if(c%2==1)
            {
                odd++;
            }
           }
           n=n>>1;

           
        }
        return {even,odd};
    }
};
