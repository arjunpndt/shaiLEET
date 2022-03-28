class Solution:
    def romanToInt(self, s: str) -> int:
        hmap={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        x=0
        temp=0;
        for i in range(1,len(s)):
            back=s[temp]
            front=s[i]
            if hmap[back]<hmap[front]:
                x-=hmap[back]
            else:
                x+=hmap[back]
            temp+=1
            
        
        x+=hmap[s[len(s)-1]]
        
            
        return x
        