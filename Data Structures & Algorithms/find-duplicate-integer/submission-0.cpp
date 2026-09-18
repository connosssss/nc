class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int fast {1}, slow {};

        while(true){
            ++slow;
            fast += 2;
            if(fast >= nums.size()) fast -= nums.size();
            if(nums[fast] == nums[slow]) return nums[fast];
            if(fast == slow) fast = 0; 
        }

        return -1;
    }
};
