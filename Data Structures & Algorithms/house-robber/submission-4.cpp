class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        vector<int> dp (len+1);
        if(len < 2) return nums[0];

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2; i<len; i++){
            dp[i] = max(nums[i]+dp[i-2], dp[i-1]);
        }
        
        return dp[len-1];
    }
};
