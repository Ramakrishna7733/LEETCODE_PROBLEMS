class Solution {
public:
    char findTheDifference(string s, string t) {
      long long n=t.length();
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      char ch;
      for(int i=0;i<n-1;i++)
      {
        if(t[i]!=s[i])
        {
        return t[i];
        }
      }
      return t[n-1];
    }
};
