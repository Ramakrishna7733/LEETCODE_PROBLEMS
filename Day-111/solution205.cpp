class Solution {
public:
    bool isIsomorphic(string s, string t) {
       vector<int>is(256,0);
       vector<int>it(256,0); 
       if(s.length()!=t.length())
       {
        return false;
       }
       for(int i=0;i<s.length();i++)
       {
        if(is[s[i]]!=it[t[i]])
        {
            return false;
        }
        is[s[i]]=i+1;
        it[t[i]]=i+1;
       }
       return true;
    }
};
