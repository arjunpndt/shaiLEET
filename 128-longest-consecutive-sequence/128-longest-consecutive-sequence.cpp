class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
            
        sort(nums.begin(),nums.end());
        int count=1;
        int mx=1;
        for(int i=0;i<nums.size()-1;i++)
        {if(nums[i]!=nums[i+1])
        {
            if(nums[i]+1==nums[i+1])
            {++count;
             mx=max(count,mx);}
            else
                count=1;}
        }
        return mx;
        
    }
};