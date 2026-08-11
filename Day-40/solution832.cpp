class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
       int n=image.size();
      
       for(int i=0;i<n;i++)
       {
         vector<int>ni;
        for(int j=n-1;j>=0;j--)
        {
       ni.push_back(image[i][j]);
       }
           ans.push_back(ni);
       }
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(ans[i][j]==0)
            ans[i][j]=1;
            else
            ans[i][j]=0;
        
        }
       }
       
      return ans; 
    }
};
