class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
             vector<int> ans;
             int n=nums.size();
        sort(nums.begin(), nums.end());

        for(int i=1; i<n; i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0; i<queries.size(); i++){
            int l=0;
            int r=n-1;
            int c=0;

            while(l<=r){
                int mid=l+(r-l)/2;

                if(nums[mid]<=queries[i]){
                    c=mid+1;
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }

            ans.push_back(c);
        }

        return ans;
    }
};
