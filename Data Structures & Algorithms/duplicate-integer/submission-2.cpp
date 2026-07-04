class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> temp {};
        for(auto num : nums){
            if(temp.contains(num)) return true;

            temp.insert(num);
        }
        return false;
    }
};