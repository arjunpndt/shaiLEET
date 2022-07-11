class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m,ma;
        m=INT_MAX;
        ma=0;
        for(int i=0;i<prices.size();i++)
        {
            m=min(prices[i],m);
            ma=max(ma,prices[i]-m);
        }
        return ma;
        
    }
};