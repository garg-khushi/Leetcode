class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        string b="./";
        string c="../";
        for(int i=0;i<logs.size();i++){
            if(logs[i]!=b && logs[i]!=c){
                
                ans++;
               
            }
            else if(logs[i]==c){
                ans--;
                 if(ans<0) ans=0;
            }
        }
        if(ans<0){return 0;}
        else
        return ans;
        
    }
};