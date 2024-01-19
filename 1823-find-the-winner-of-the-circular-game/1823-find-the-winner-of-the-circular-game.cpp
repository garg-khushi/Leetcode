class Solution {
public:
    void solve(vector<int>v, int k, int &ans,int ind){
        if(v.size()==1){
            ans=v[0];
            return;
        }
        ind=(ind+k)%v.size();
        v.erase(v.begin()+ind);
        solve(v,k,ans,ind);
        
    }
    int findTheWinner(int n, int k) {
       vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        int ans=0;solve(v,k-1,ans,0);
        return ans;
    }
};

// jump k people case 1. n>k
/* 
n keeps reducing by one
need to remove that one kth 
index
skip=k%n
(n-skip+ind>=0){

}
*/