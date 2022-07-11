class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> m;
        m=matrix;
        int n=matrix.size();
        for(int i=n-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                matrix[j][i]= m[i][j];
            }
        }
        for(int i=n-1;i>=0;i--)
        {reverse(matrix[i].begin(),matrix[i].end());}
        
    }
};