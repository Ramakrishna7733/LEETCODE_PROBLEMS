class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mapss;
        for (string s : strs) {
            string t=s;
            sort(s.begin(), s.end());
            mapss[s].push_back(t);
        }
        vector<vector<string>>ans;
        for (auto x : mapss) { 
            ans.push_back(x.second);
        }
        return ans;
    }
};
