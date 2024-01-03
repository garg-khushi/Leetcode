#include <algorithm>  // Add this include for the min function

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;
        const int m = nums.size();
        int temp = 0;
        for(int i=0;i<k;++i){temp+=nums[i];}
        ans = (double)temp/(double)k;
        for(int i=k;i<m;++i){
            temp-=nums[i-k];
            temp+=nums[i];
            double tavg = (double)temp/(double)k;
            ans = max(ans,tavg);
        }
        return ans;
   
    }
};
