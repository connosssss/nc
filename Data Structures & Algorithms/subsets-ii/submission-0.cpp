class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
       
            vector<int> temp {};
            backtrack(0, nums, false, temp);
        


        return res;
    }
    void backtrack(int index, vector<int>& nums, bool skipable, vector<int>& sub){
        if(index == nums.size()){
            res.push_back(sub);
            return;
        }
        skipable = (index > 0 && nums[index-1] == nums[index]) ? true: false;
        sub.push_back(nums[index]);
        
        backtrack(index+1, nums, skipable, sub);
        sub.pop_back();
        while (index + 1 < nums.size() && nums[index] == nums[index + 1]) {
            index++;
        }
        backtrack(index+1, nums, skipable, sub);

    }
};
