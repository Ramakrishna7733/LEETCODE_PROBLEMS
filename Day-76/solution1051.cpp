class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int>ni=heights;
        sort(heights.begin(),heights.end());
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(heights[i]!=ni[i])
            {
              c++;  
            }
        }
        return c;
    }
};
