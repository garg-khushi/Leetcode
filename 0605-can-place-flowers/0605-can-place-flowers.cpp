class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int s=flowerbed.size();
        if(s>1){
        int count=0;
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            count++;
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if (flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0 ) {
                flowerbed[i]=1;
                count++;
            }
    }
        if(flowerbed[s-1]==0 && flowerbed[s-2]==0){
            count++;
        }
        if(count>=n){
            return true;
        }
        else
            return false;
        }
        else{
            if((flowerbed[0]==0 && n==1) || n==0){
                return true;
            }
            else{
                return false;
            }
            
        }
    }
};