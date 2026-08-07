class Solution {
public:
    int smallestNumber(int n, int t) 
    {
        int a=n;
        while(1)
        {
            int p=1;
            int x=a;
            while(x>0)
            {
                p*=x%10;
                x/=10;
            }
            if(p%t==0)
            break;
            a++;
        }
        return a;
    }
};
