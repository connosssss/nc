class Solution {
public:
    int mySqrt(int x) {
        int res {};
        int l = 0, r = x;
        int cur = l + (r-l) / 2;
        while (l < r){
            cout<<cur<<endl;
            if(cur*cur > x){   
                 r= cur-1;
                
                
            }
            else if(cur*cur < x){
            l = cur+1;
            res = cur;}
               

            else return static_cast<int>(floor(cur));


            cur = l + (r-l) / 2.0;
        }

        return static_cast<int>(floor(cur));
    }
};