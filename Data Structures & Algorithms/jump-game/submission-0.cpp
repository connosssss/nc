class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max {};

        for(int i {}; i<nums.size(); ++i){
            if (i > max) {
                return false;
            }

            max = std::max(max, i + nums[i]);
            
            if (max >= nums.size() - 1) {
                return true;
            }
            
            
        }

        return true;
        
    }
};
