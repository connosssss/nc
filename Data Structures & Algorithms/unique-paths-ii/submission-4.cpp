class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp (obstacleGrid.size() + 1, vector<int> (obstacleGrid[0].size() + 1, 0));

        for(int i {}; i< obstacleGrid.size(); ++i){
            for(int j {}; j< obstacleGrid[0].size(); ++j){

                if(obstacleGrid[i][j] == 1) dp[i][j] = -1;

            }
        }

        dp[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1] =  dp[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1] >= 0 ?  1 : -1;

        

        for(int i = obstacleGrid.size() -1; i>= 0; --i){
            for(int j = obstacleGrid[0].size() -1; j>= 0; --j){
                int num1 = dp[i + 1][j], num2 = dp[i][j+1];
                int res {};

                if(num1 >= 0) res += num1;
                if(num2 >= 0 ) res += num2;

                dp[i][j] = dp[i][j] >= 0 ? res + dp[i][j] : -1;
            }
        }

        for (auto v : dp){
            for (auto e : v){
                cout<<e << " ";

            } cout<<endl;
        }

        
        return dp[0][0] > 0 ? dp[0][0] : 0;
    }
};