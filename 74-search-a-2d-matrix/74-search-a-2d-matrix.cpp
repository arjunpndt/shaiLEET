class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int start = 0;
        int end = n*m-1;
        int mid = start + (end-start)/2;                          /*     mid/col   gives row      */
        while(start<=end){                                        /*     mid%col  gives col       */                     
            int s = matrix[mid/m][mid%m];
            if(s==target){
                return true;
            }
            else if(s>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start + (end-start)/2;  
        }
        return false;
    }
};