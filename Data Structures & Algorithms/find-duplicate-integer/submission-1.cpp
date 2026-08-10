class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size() <= 2) return nums[0];

        int fast {0}, slow {0};

        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];

            if(slow == fast) break;
            
        }

        int slo {0};

        while (true) {
            slow = nums[slow];
            slo = nums[slo];
            if(slo == slow ){
                return slow;
                break;
            } 
        }


        return slow;
    }
};
