class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>alt;
        int sum=0;
        alt.push_back(0);
     for(int i=0;i<n;i++)
     {
        sum+=gain[i];
        alt.push_back(sum);
     }   
     int maxx=*max_element(alt.begin(),alt.end());
     return maxx;
    }
};
