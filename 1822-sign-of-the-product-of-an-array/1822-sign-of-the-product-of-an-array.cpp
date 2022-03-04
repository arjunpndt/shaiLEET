class Solution {
public:
    int arraySign(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(auto x:nums)
        {
            if(x<0)
                count++;
            else if(x==0)
            {count=-1;
             break;}
            else if(x>0)
                break;
        }
        cout<< count;
        if(count==-1)
        return 0;
        else if(count%2==0)
            return 1;
        else
            return -1;
        
        
    }
};