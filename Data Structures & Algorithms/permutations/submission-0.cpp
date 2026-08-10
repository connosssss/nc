class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() < 1) return {};
        

        vector<int> sub;
        vector<bool> used(nums.size(), false);

        dfs(sub, nums, used);

        return res;
    }


    void dfs(vector<int>& sub, vector<int>& nums, vector<bool> used){

        if(sub.size() >= nums.size()) {
            vector<int> temp (sub.begin(), sub.end());
            res.push_back(temp);
            return;
        }

        for(int i {}; i<nums.size(); i++){
            if(!used[i]){
                sub.push_back(nums[i]);
                used[i] = true;
                dfs(sub, nums, used);
                used[i] = false;
                sub.pop_back();

            }

        }
        

    }
};
