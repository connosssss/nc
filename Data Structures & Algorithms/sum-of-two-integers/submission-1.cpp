class Solution {
public:
    int getSum(int a, int b) {
        int res {};
        int carry {};
        for(int i {}; i< 32; ++i){
            int b1 = (a >> i) & 1;
            int b2 = (b >> i) & 1;

            res |= ((b1 ^ b2 ^ carry) << i);

            if((b1 | carry) & (b2 | carry)) carry = 1;
            else carry = 0;
            
            

        }

        return res;
    }
};
