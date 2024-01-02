class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto &i:nums){
            m[i]++;
        }
        vector<vector<int>> ans;
        while(!m.empty()){
            vector<int> temp,toErase;
            for(auto &[f,s]:m){
                temp.emplace_back(f);
                s--;
                if(s==0) toErase.emplace_back(f);
            }
            ans.push_back(temp);
            for(auto &i :toErase){
                m.erase(i);
            }
        }
        return ans;
    }
};