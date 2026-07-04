class Solution {
    vector<vector<int>> result;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int index {};
        vector<int> temp {};
        dfs(temp, index, nums);



        

        return result;


    }

    void dfs(vector<int> subset, int index, const vector<int>& nums){
        if(index >= nums.size()){
            result.push_back(subset);
            return;
        }

        dfs(subset, index+1, nums);
        subset.push_back(nums[index]);
        dfs(subset, index+1, nums);
        return;                                

    }


};
