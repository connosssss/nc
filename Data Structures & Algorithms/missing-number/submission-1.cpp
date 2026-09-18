class Solution {
public:
    int missingNumber(vector<int>& nums) {
       

        for(int i {}; i<(nums.size()); ++i){
            uint32_t cur = nums[i];
            for(int j {}; j<32; j++){
                if((i << j) ^ (cur << j)){
                    return i;
                }
            }
        }

        return 0;
    }
};
