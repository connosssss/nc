class Solution {
public:
    int mySqrt(int x) {
        int res {};
        int l = 0, r = x;
        int cur = l + (r-l) / 2;
        while (l <= r){
            
            if(cur*cur > x){   
                 r= cur-1;
                
                
            }
            else if(cur*cur < x){
            l = cur+1;
            res = cur;}
               

            else return cur;


            cur = l + (r-l) / 2;
        }

        return static_cast<int>(floor(cur));
    }
};