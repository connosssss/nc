class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum {};
        int l {};
        int max {};

        for(int i = 0; i < nums.size(); ++i){
            
            cursum = std::max(nums[i], nums[i] + cursum);
            max = std::max(max, cursum);
        }

        return max;
    }
};
