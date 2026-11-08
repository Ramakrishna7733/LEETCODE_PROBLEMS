class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxx=0;
        while(l<=r)
        {
            int w=r-l;
            int h=min(height[l],height[r]);
            int a=w*h;
            maxx=max(maxx,a);
            if(height[l]<height[r])
            {
                l++;
            }
            else if(height[l]>height[r])
            {
                r--;
            }
            else
            {
                l++;
                r--;
            }
        }
        return maxx;
    }
};
