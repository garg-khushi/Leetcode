class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
        int count=0;
       int l=0;
        int r=nums.size()-1;
        while(l<r){
            int sum=nums[l]+nums[r];
            if(sum==k){
                l++;
                r--;
                count++;
            }
            else if(sum<k){
                l++;
            }
            else if(sum>k){
                r--;
            }
        }
        return count;
    }
};