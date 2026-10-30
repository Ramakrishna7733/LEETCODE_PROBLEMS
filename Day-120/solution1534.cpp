class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int cnt=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
            for(int k=j+1;k<arr.size();k++)
            {
                if(abs(arr[j]-arr[k])<=b&&abs(arr[i]-arr[k])<=c&&abs(arr[i]-arr[j])<=a)    
                {
                    cnt++;
                }
                
            }}
        }
        return cnt;
        
    }
};
