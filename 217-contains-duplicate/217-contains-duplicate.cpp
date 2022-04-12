class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> a;
        for(int i=0;i<nums.size();i++)
        {
            int x=a.size();
            a.insert(nums[i]);
            int y=a.size();
            if(x==y)
            {
                return true;
            }
        
        }
          return false;
        
    }
};