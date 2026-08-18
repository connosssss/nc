class Solution {

    map<pair<int, int>, int> memo;
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size() == 0) return 0;
       /* vector<int> dp (triangle.size() + 1);
        dp[0] = triangle[0][0]; */

        return dfs(triangle, 0, 0);
    }

    int dfs(vector<vector<int>>& triangle, int layer, int i){
        if(memo.contains({layer, i})) return memo[{layer, i}];
        if(layer >= triangle.size() || i >= triangle[layer].size()) return 0;

        int res = min(dfs(triangle, layer+1, i), dfs(triangle, layer+1, i+1)) + triangle[layer][i];
        memo[{layer, i}] = res;
        return res;
    }
};