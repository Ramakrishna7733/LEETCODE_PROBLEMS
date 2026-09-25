class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
      vector<int> before;
vector<int> equal;
vector<int> after;

for(int x : nums)
{
    if(x < pivot)
        before.push_back(x);
    else if(x == pivot)
        equal.push_back(x);
    else
        after.push_back(x);
}

before.insert(before.end(), equal.begin(), equal.end());
before.insert(before.end(), after.begin(), after.end());

return before;
    }
};
