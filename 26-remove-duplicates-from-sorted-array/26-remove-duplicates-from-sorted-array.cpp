class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
        int i=0;
        int count=0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                i++;
            }
            else{
                nums[count]=nums[i];
                count++;
                i++;
            }
        }
        nums[count]=nums[i];
        return count+1;
    }
};