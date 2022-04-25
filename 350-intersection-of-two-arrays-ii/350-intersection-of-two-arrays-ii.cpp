class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto x: a) mp[x]++;
        for(auto x: b) {
            if(mp[x]>0) {
                ans.push_back(x);
                mp[x]--;
            }
        }
        return ans;
    }
};