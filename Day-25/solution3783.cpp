class Solution {
public:
    int mirrorDistance(int n) {
        int ans=0,rev;
        int temp=n;
        while(n!=0)
        {
            rev=n%10;
            ans=ans*10+rev;
            n/=10;
        }
    return abs(temp-ans);
    }
};
