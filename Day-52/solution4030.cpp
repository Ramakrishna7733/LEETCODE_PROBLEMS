class Solution {
public:
    bool isPalindromic(string s) {
       string binary="";
      for(char ch:s)
      {
        int val=(int)ch;
        binary+=bitset<8>(val).to_string();
        
      }
            
        return binary==string(binary.rbegin(),binary.rend());
    }
};
