class Solution {
public:
    double average(vector<int>& salary) {double mx;
        for(auto x:salary)
         mx=mx+x;
      mx=mx-(*min_element (salary.begin(),salary.end())+*max_element (salary.begin(),salary.end()));
     double avg;
                                         avg=mx/(salary.size()-2);
                                         return avg;
        
    }
};