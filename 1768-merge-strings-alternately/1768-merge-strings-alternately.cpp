class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string a,b,ans;
        if(word1.size()>=word2.size()){
             a=word1;
            b=word2;
        }
        else{
            a=word2;
            b=word1;
        }
        for(int i=0;i<b.size();i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        for(int i=b.size();i<a.size();i++){
            ans+=a[i];
        }
        return ans;
    }
};