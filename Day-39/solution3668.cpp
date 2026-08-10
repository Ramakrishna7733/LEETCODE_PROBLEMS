class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        bool flag=0;
        vector<int>ni;
         for(int id:order)
         {
            for(int f:friends)
            {
                if(id==f)
                    ni.push_back(id);
            }
         }
        return ni;
    }

};
