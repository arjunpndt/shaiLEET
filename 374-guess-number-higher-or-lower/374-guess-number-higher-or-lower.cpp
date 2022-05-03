/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
   int s=1,l=n,ans,mid,res;
        while(l>=s)
        {   mid= s+(l-s)/2;
         res=guess(mid);
            if(res==-1)
                l=mid-1;
            else if(res==1)
                s=mid+1;
            else
                return mid;
            
        }
        return -1;
    }
};