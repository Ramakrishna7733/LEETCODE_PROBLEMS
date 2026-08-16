class Solution {
public:
    int pivotInteger(int n) {
       int pv=0;
     int sum=n*(n+1)/2;

    
        int ans=-1;
        for(int i=1;i<=n;i++)
        {
            pv=sum+i;
            if(pv%2==0&&pv/2==i*(i+1)/2)
            {
              ans=i;
            }
        }
   
     
return ans;
        }
        
        
    
};
