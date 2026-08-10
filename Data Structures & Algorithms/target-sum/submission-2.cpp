class Solution { 

    map<pair<int,int>, int> memo;
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        


        return dfs(0, 0, nums, target);
    }

    int dfs(int index, int cursum, vector<int>& nums, int target){

        if(index == nums.size() && cursum == target) return 1;
        if(index >= nums.size()) return 0;
        if(memo.contains({index, cursum})) return memo[{index,cursum}];
      

        int res {};

        res = dfs(index + 1, cursum + nums[index], nums, target) + dfs(index + 1, cursum - nums[index], nums, target);

        memo[{index, cursum}] = res;

        
        return res;


    }
};
