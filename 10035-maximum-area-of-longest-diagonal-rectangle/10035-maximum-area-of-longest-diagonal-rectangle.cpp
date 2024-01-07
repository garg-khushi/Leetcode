#include <vector>
#include <cmath>

class Solution {
public:
    int areaOfMaxDiagonal(std::vector<std::vector<int>>& dimensions) {
        if (dimensions.empty()) {
            return 0;
        }

        int d = 0;
        int a = dimensions[0][0];
        
        int b = dimensions[0][1];
        int maxd = (a * a + b * b);
        int ar=a*b;
        map<int,int>ans;
        for (int i = 0; i < dimensions.size(); i++) {
            a = dimensions[i][0];
            b = dimensions[i][1];
            d = (a * a + b * b);
            maxd=max(maxd,d);
            ar=a*b;
            ans[d]=max(ans[d],ar);
            
        }
return ans[maxd];
    
    }
};
