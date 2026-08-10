class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum {nums[0]};
        
        int max {nums[0]};

        for(int i = 1; i < nums.size(); ++i){
            
            cursum = std::max(nums[i], nums[i] + cursum);
            max = std::max(max, cursum);
        }

        return max;
    }
};
