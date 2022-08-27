class Solution {
    public boolean isMatch(String s, String p) {
            boolean[] dp = new boolean[s.length() + 1];
    
    dp[0] = true;
    
    for(int idx2 = 1; idx2 < dp.length; idx2++) {
        
        dp[idx2] = false;
        
    }
    
    
    for(int idx1 = 1; idx1 < p.length() + 1; idx1++) {
        
        boolean[] temp = new boolean[dp.length];
        
        if(dp[0] == false || p.charAt(idx1 - 1) != '*') {
            
            temp[0] = false;
            
        } else {
            
            temp[0] = true;
        }
        
        for(int idx2 = 1; idx2 < dp.length; idx2++) {
            
            if(p.charAt(idx1 - 1) == s.charAt(idx2 - 1) || p.charAt(idx1 - 1) == '?') {
        
                temp[idx2] = dp[idx2 - 1];

            } else if(p.charAt(idx1 - 1) == '*') {

                temp[idx2] = dp[idx2] || temp[idx2 - 1];

            } else {

                temp[idx2] = false;
            }
        }
        
        dp = temp;
    }
    
    return dp[s.length()];        
}
        
    }
