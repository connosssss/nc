class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        dfs(0, nums, target, temp, 0);

        return res;
    }

    void dfs(int index, vector<int>& nums, int& target, vector<int>& sub, int cursum){
        
        if(index >= nums.size()) return;
        if(cursum > target) return;

        dfs(index + 1, nums, target, sub, cursum);

        sub.push_back(nums[index]);
        cursum += nums[index];
        if(cursum == target) {
            res.push_back(sub);
        }else{
            dfs(index, nums, target, sub,cursum);

        }
            sub.pop_back();
        return;
    }
};
