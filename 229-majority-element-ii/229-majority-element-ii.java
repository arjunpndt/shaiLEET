class Solution {
    public List<Integer> majorityElement(int[] nums) {
        List<Integer>arr=new ArrayList<>();
        Integer m1=null,m2=null;
        int c1=0,c2=0;
        for(int num : nums){
            if(m1!=null&& m1==num){
                ++c1;
            }else if(m2!=null && m2==num){
                ++c2;
            }else if(m1==null){
                m1=num;
                c1=1;
            }else if(m2==null){
                m2=num;
                c2=1;
            }else{
                --c1;
                --c2;
                if(c1==0){
                    m1=null;
                }
                if(c2==0){
                    m2=null;
                }
            }
        }
        int ans1=0;
        int ans2=0;
        for(int i=0;i<nums.length;i++){
            if(m1!=null && nums[i]==m1){
                ans1++;
            }if(m2!=null && nums[i]==m2){
                ans2++;    
            }
            
        }
        if(ans1>nums.length/3){
                    arr.add(m1);
                }
            if(ans2>nums.length/3){
                    arr.add(m2);
                }
        return arr;
    }
}