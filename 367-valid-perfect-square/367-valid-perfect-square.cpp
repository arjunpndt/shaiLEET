class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num == 1) return true;
        
        long long first = 1, last = num / 2, middle;
        
        while(first <= last) {
            middle = (first + last) / 2;
            long long temp = middle * middle;
            if(temp == num) return true;
            if(temp > num) last = middle - 1;
            else if(temp < num) first = middle + 1;
        }
        return false;        
    }
};