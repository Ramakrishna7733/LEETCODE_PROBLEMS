class Solution {
public:
    int addDigits(int num) {
      if(num<=9)
      {
        return num;
      }
        long long s=0;
       while(num>0)
        {
            int d=num%10;
            s+=d;
            num/=10;
        }
    
    return addDigits(s);
    }
};
