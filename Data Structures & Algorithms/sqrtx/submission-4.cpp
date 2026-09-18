class Solution {
public:
    int mySqrt(int x) {
        int res {};
        int l = 0, r = x;
        
        while (l <= r){
            int cur = l + (r-l) / 2;
            if(cur*cur > x){   
                 r= cur-1;
                
                
            }
            else if(cur*cur < x){
            l = cur+1;
            res = cur;}
               

            else return cur;


          
        }

        return res;
    }
};