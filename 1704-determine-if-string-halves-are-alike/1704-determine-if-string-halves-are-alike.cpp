class Solution {
public:
    bool halvesAreAlike(string s) {
        int v1=0,v2=0,c1=0,c2=0;
        int n=s.size();
        for(int i=0;i<s.size()/2;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
v1++;}
            else{
c1++;}
            if(s[n-i-1]=='a'||s[n-i-1]=='e'||s[n-i-1]=='i'||s[n-i-1]=='o'||s[n-i-1]=='u'||s[n-i-1]=='A'||s[n-i-1]=='E'||s[n-i-1]=='I'||s[n-i-1]=='O'||s[n-i-1]=='U'){
          v2++;      
            }
            else{
c2++;}
        }

        if(v1==v2 and c1==c2){
            return true;
        }
       return false;
    }
};