class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;int i=0;
        while(i<s.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
            if(j>t.size()){
                return false;
            }
        }
        if(i==s.size()){
            return true;
        }
        else{
            return false;
        }
    }
};