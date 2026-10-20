class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>freq;
        for(int x:arr)
        {
         freq[x]++;
        }
        unordered_set<int>c;
        for(auto x:freq)
        {
            c.insert(x.second);
        }
        return freq.size()==c.size();
    
    }
};
