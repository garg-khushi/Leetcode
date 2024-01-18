#include<cmath>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else {
            int r=rev(x);
            if(x==r){
                return true;
            }
            else{
                return false;
            }
        }
    }
    int rev(int n){
        long long int ne=0;
        int i=0;
        while(n){
            ne=ne*10+(n%10);
            n/=10;
            i++;
        }
        return ne;
    }
};