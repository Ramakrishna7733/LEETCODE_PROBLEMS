class Solution {
public:
    int countEven(int num) {
      int c=0;
        for(int i=1;i<=num;i++)
        {
            int s=0;
            int x=i;
            while(x>0)
            {
         int d=x%10;
         s+=d;
         x/=10;
            }
         if(s%2==0)
         {
            c++;
         }
            
        }
        return c;
    }
};
