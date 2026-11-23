class Solution {
public:
    bool checkString(string s) {
        int j;
        int n=s.length();
     for(int i=0;i<n;i++)
     {
        if(s[i]=='b')
        {
            j=i;
            for(int i=j;i<n;i++)
            {
                if(s[i]=='a')
                {
                    return false;
                }
            }
        }
     }
     return true;
    }
};
