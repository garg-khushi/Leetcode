class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        else{
      sort(nums.begin(),nums.end());
    int n=nums.size();
    int count=0;
    int temp_count=0;
    for(int i=0;i<n-1;i++){
        int dif=abs(nums[i]-nums[i+1]);
        if(dif==1 || dif==0){
            if(dif==1){
                temp_count++;
            }
        }
        else{
            if(count<temp_count){
                count=temp_count;
            }
            temp_count=0;
        }
    }
    if(count<temp_count){
        count=temp_count;
    }
    count++;
    return count;  
        }
    }
};