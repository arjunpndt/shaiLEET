class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int y=0;
        for(auto x:nums)
            y=y^x;
        return y;
        
        
    }
};