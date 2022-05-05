class Solution {
public:
     int peakIndexInMountainArray(vector<int>& arr) {
        
        int lo= 0;
        int hi= arr.size()-1;
        
        while(lo<=hi){
            int mid= lo+ (hi-lo)/2;
            
            if((mid== 0 || arr[mid-1]<= arr[mid])
              && (mid==arr.size()-1 || arr[mid]>= arr[mid+1]))
                return mid;
            
            if(mid>0 && arr[mid-1]>= arr[mid])
                hi= mid-1;
            else
                lo= mid+1;
        }
        
        return -1;
    }
};