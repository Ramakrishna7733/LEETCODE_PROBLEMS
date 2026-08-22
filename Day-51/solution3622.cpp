class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0,p=1;
        int temp=n;
        while(n>0)
        {
            int d=n%10;
            s+=d;
            p*=d;
            n/=10;
        }
        if(temp%(p+s)==0)
        {
        return true;
        }
       
        return false;
    }
};
