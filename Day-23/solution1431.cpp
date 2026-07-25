class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool> result;
       int maxx=0;
       for(int c :candies)
       {
        maxx=max(maxx,c);
       }
       for(int c:candies)
       {
        result.push_back(c+extraCandies>=maxx);
       }

      return result; 
    }
};
