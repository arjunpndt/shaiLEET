class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ptr=0,ctr=0;
        for(auto x:nums)
        {
            while(x!=0)
            {ptr++;
             x=x/10;
            }
         if(ptr%2==0)
          ctr++;
         ptr=0;
        }
        return ctr;
        
    }
};