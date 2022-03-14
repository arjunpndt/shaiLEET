class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        if(s1.size()==1)
        {
            return s1==s2;
        }
        
        vector<int> phash(26,0);
        vector<int> shash(26,0);
        
        int count=0;
        int i=0;
        int j=0;
        for(int i=0;i<s1.size();i++)
        {
            phash[s1[i]-'a']++;
            shash[s2[i]-'a']++;
        }
        if(phash!=shash)
        {
            return false;
        }
        else
        {
            while(i<s1.size() && j<s2.size() && count<3)
            {
                if(s1[i]!=s2[i])
                {
                    count++;
                }
                i++;
                j++;
            }
        }
        return count<3;
        
    }
};