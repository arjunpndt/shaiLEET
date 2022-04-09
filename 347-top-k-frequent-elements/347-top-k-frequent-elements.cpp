class Solution {
public:
    // comparator function to sort the elements by decreasing order of their frequency
    static bool cmp(pair<int,int> &a, pair<int,int> &b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        // map to store frequency of elements
        map<int, int> mp;
        for(auto x: nums)
        {
            mp[x]++;
        }
        
        // convert map to vector to sort them in descending order of frequency
        vector<pair<int,int>> freq;
        for(auto a: mp) 
            freq.push_back({a.first,a.second});
        
        sort(freq.begin(), freq.end(), cmp);
        
        // return the first K elements of the sorted array
        while(k--) 
            ans.push_back(freq[k].first);
             
        return ans;
    }
};