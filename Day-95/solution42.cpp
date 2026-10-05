class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<2)
        {
            return 0;
        }
        vector<int>prefmax(n);
      prefmax[0]=height[0];
      vector<int>suffmax(n);
        suffmax[n-1]=height[n-1];
        int ans=0;
        for(int i=n-2;i>0;i--)
        {
            suffmax[i]=max(height[i],suffmax[i+1]);
        }
        for(int i=1;i<n-1;i++)
        {
            prefmax[i]=max(height[i],prefmax[i-1]);
            ans+=min(prefmax[i],suffmax[i])-height[i];
        }
        return ans;
    }
};
