class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
		for(int i=n-1; i>-1; i--){
			if(v[i] == 9)
				v[i] = 0;
			else{
				v[i] = v[i] + 1;
				return v;
			}
		}
		if(v[0] == 0){
			v[0] = 1;
			v.push_back(0);
			return v;
		}
		return {}; 
    }
};