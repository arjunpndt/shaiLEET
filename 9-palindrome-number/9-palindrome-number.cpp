class Solution {
public:
    bool isPalindrome(int x) {if(x<0)
        return false;
                              else{
        string s=to_string(x);
        int n=s.size(),i,j,ptr=0;
        i=0;
        j=n-1;
        while(i<j){
            if(s[i]!=s[j])
            {ptr=1;
             break;}
             i++;
             j--;}
        if(ptr==0)
            return true;
        else
            return false;}
        
        
    
        
        
    }
};