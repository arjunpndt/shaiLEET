class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct=0;
        int el=0;
        for(int i=0;i<nums.size();i++)
        {
        if(ct==0)
        {
            el=nums[i];
        }
        if(nums[i]==el)
            ++ct;
        else if( nums[i]!=el)
            --ct;
        }
        return el;
    }
};