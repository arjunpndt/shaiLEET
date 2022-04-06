class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long long int ans = 0;
        int n = arr.size(), mx = *max_element(arr.begin(), arr.end()), mod = 1e9+7;
        vector <vector<int>> v(n+1, vector<int>(mx+1, 0));
        v[0][arr[0]] = 1;
        for(int i=1; i<n; i++){
            for(int j=0; j<=mx; j++)
                v[i][j] = v[i-1][j];
            v[i][arr[i]] +=  1;
        }
        for(int i=1; i<n-1; i++){
            int l = 0, r = target-arr[i];
            while(r >= 0){
                if(l<=mx && r <= mx)
                    ans = (ans + v[i-1][l]*(v[n-1][r]-v[i][r]))%mod;
                l += 1;
                r -= 1;
            }
        }
        return ans;
    }
};