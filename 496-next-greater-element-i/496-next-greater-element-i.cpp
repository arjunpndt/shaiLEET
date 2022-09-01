class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
      int cnt=-1;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    for(int z=j;z<nums2.size();z++)
                    {
                        if(nums2[z]>nums2[j])
                        {ans.push_back(nums2[z]);
                         cnt=1;
                        break;}
                        cnt=-1;
                        
                    }
                    if(cnt==-1)
                        ans.push_back(-1);
                }
            }
        }
        return ans;
        
    }
};