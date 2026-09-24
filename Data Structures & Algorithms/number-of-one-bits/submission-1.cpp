class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res {};

        for(int i {}; i<32; ++i){
            if(n >> i & 1) res++;
        }

        return res;
    }
};
