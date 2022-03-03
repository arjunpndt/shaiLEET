class Solution {
public:
    int subtractProductAndSum(int n) {
        long long x=n,y=n,sm=0,pr=1;
        while(x!=0){            
            sm+=x%10;
            x=x/10;
        }
        while(y!=0){            
            pr=pr*(y%10);
            y=y/10;
        }
        int tmp=pr-sm;
        return tmp;
        
        
    }
};