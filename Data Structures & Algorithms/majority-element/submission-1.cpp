class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> store {};
        int res {};
        res = nums[0];
        for(auto num: nums){
            store[num]++;
            
            if(store[num] > store[res]){
                res = num;
            }
        }

        return res;
    }
};