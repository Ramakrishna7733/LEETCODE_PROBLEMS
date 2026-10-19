class Solution {
public:
    double average(vector<int>& salary) {
     int minn=*min_element(salary.begin(),salary.end());
     int maxx=*max_element(salary.begin(),salary.end());
     int sum=0;
     int n=salary.size();
    for(int i=0;i<salary.size();i++)
    {
        sum+=salary[i];
    }
    int minmax=minn+maxx;
    int m=n-2;
    double avg=(double)(sum-minmax)/m;
     return avg;   
    }
};
