class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int ans=0;
        bool o=false;
        for(char ch:s)
        {
            mp[ch]++;
        }
        for(auto x:mp){
            if(x.second%2==0)
            {
                ans+=x.second;
            }
            else
            {
                ans+=x.second-1;
                 o=true;
            }
    
        }
        if(o)
        
            ans++;
        
       
        return ans;
    }
};
