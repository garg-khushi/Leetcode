class Solution {
public:
    int findMin(vector<int>& nums) {
      
       int x=*min_element(nums.begin(),nums.end());    
       return x;
    }
};