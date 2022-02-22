class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector <int> z;
        int ptr=0;
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]==1)
            ptr++;
            else
            {z.push_back(ptr);
             ptr=0;
            }
            if(x==nums.size()-1)
                z.push_back(ptr);
            
        }
        return *max_element(z.begin(),z.end());
    }
};