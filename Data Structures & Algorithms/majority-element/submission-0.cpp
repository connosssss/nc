class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> store {};
        int res {};
        for(auto num: nums){
            store[num]++;
            res = max(res, store[num]);
        }

        return res;
    }
};