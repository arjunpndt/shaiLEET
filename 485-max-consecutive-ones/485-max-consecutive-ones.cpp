class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0,cnt=0;
        for(int i=0;i<nums.size();i++)
        {   
            if(nums[i]==1)
            {
                curr+=1;
            if(i==nums.size()-1)
                if(curr>cnt)
                cnt=curr;}
            else
            {
                if(curr>cnt)
                  cnt=curr;
                curr=0;
            }
                
        }
        return cnt;
    }
};