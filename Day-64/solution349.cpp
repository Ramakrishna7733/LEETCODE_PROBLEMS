class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     
    set<int>s1(nums1.begin(),nums1.end());
    nums1.assign(s1.begin(),s1.end());
     set<int>s2(nums2.begin(),nums2.end());
    nums2.assign(s2.begin(),s2.end());
     int n1=nums1.size();
      int n2=nums2.size();
    vector<int>ni;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(nums1[i]==nums2[j])
        {
          ni.push_back(nums1[i]);
        }
        }
    }
    return ni;
    }
};
