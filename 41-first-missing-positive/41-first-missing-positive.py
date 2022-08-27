class Solution(object):
    def firstMissingPositive(self, nums):
        nums.sort()
        
        for num in nums:
            if num > 0:
                indx = nums.index(num)
                nums = nums[indx:]
                break
                
        if max(nums) <= 0 or nums[0] > 1: return 1
        
        nums1 = nums[1:] + [nums[0]]
        
        zpobj = zip(nums,nums1)
        
        for x,y in zpobj:
            if (y-x) > 1: return (x+1)
        
        return max(nums)+1