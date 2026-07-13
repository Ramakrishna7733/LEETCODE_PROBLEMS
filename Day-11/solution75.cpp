class Solution {
public:
    void sortColors(vector<int>& nums) {
     int z=0,o=0,s=0;
    for(int num:nums)
    {
        if(num==0)
        {
            z++;
        }
        else if(num==1)
        {
            o++;
        }
        else if(num==2)
        {
            s++;
        } 
    }
    int index=0;
    while(z--)
    nums[index++]=0;
    while(o--)
    nums[index++]=1;
    while(s--)
    nums[index++]=2;

    }
};
