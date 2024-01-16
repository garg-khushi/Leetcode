class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int m=nums.size();
        map<int,int>mp;
        for(int i=1;i<=m;i++){
            mp[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }
         for(int i=1;i<=m;i++){
             if(mp[i]==0){
                 ans.push_back(i);
             }
         }
        return ans;
    }
};