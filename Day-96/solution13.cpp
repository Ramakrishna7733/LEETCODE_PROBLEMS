class Solution {
public:
    int romanToInt(string s) {
        int cnt=0;
      for(int i=0;i<s.length();i++)
      {
        int c;
        if(s[i]=='I')
        {
         c=1;
        }
        else if(s[i]=='V')
        {
            c=5;
        }
        else if(s[i]=='X')
        {
            c=10;
        }
        else if(s[i]=='L')
        {
            c=50;
        }
        else if(s[i]=='C')
        {
            c=100;
        }
        else if(s[i]=='D')
        {
            c=500;
        }
        else
        {
            c=1000;
        }
        if(i+1<s.length())
        {
            int n;
            if(s[i+1]=='I')
            {
                n=1;
            }
            else if(s[i+1]=='V')
            {
                n=5;
            }
            else if(s[i+1]=='X')
            {
                n=10;
            }
            else if(s[i+1]=='L')
            {
                n=50;
            }
            else if(s[i+1]=='C')
            {
                n=100;
            }
            else if(s[i+1]=='D')
            {
                n=500;
            }
            else 
            {
                n=1000;
            }
            if(c<n)
            {
                cnt-=c;
            }
            else
            {
                cnt+=c;
            }
        }
        else
        {
            cnt+=c;
        }

      } 
    
      return cnt; 
    
}
};
