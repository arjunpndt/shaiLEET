class Solution {
public:
    int trap(vector<int>& height) {
       int  n=height.size();
        int l=0,r=n-1;
        int lft=0,rgt=0;
        int res=0;
        while(l<=r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]>lft)lft=height[l];
                else
                    res+=lft-height[l];
               l++; 
            }
          
            else
            {  if(height[r]>rgt)rgt=height[r];
            else
                res+=rgt-height[r];
              r--;}
          
        }
        return res;
    }
};