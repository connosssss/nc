class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> dp(nums.size()+1);
        int m = nums[0];
        dp[0] = nums[0];

        for(int i {1}; i<nums.size();i++){
            int temp = dp[i-1]*nums[i];
            if(nums[i] > temp){
                dp[i] = nums[i];
            }
            else{
                dp[i] = temp;
            }

            m = max(m, dp[i]);
        }

        return m;
    }
};
