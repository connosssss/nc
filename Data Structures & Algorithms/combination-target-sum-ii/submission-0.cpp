class Solution {
    vector<vector<int>> res;

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp {};
        sort(candidates.begin(), candidates.end());
        dfs(0, candidates, target, 0, temp);
        return res;
    }   


    void dfs(int index, vector<int>& candidates, int target, int cursum, vector<int>& curvec) {

        if(cursum == target){
            res.push_back(curvec);
            return;
        }
        if(cursum > target || index >= candidates.size()) return;

        int curnum {candidates[index]};

        curvec.push_back(curnum);
        cursum += curnum;
        dfs(index + 1, candidates, target, cursum, curvec);
        curvec.pop_back();
        
        cursum -= curnum;
        while (index + 1 < candidates.size() && candidates[index] == candidates[index + 1]) {
            index++;
        }
        dfs(index + 1, candidates, target, cursum, curvec);


    }
};
