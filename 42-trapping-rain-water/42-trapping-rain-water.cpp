class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int s=height.size();
        vector<int> le(s,0);
        vector<int> re(s,0);
        le[0]=height[0];
        re[s-1]=height[s-1];
        
        for( int i=1;i<s;i++)
            le[i]=max(le[i-1],height[i]);
        
        for( int j=s-2;j>=0;j--)
        {
           re[j]=max(height[j],re[j+1]);
        }
        for( int i=1;i<s;i++)
        {
            res+=min(re[i],le[i])-height[i];
        }
                            return res;
        return 0;
    }
};