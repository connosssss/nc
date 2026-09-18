class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp (coins.size()+1, vector<int> (amount + 1, 0));
        
        for(int i {}; i<coins.size()+1;++i){
            dp[i][0] = 1;
        }

        for(int i = coins.size()-1; i>=0; i--){
            for(int j = 1; j <= amount; ++j){
                if(j-coins[i] >= 0){
                    dp[i][j] = dp[i + 1][j];
                    dp[i][j] += dp[i][j-coins[i]];
                }
            }
        }

/*
        for(auto row : dp){
            for (auto e : row){
                cout<<e<<" ";

            }
            cout<<endl;
        } */
         return dp[0][amount];
    }

   

    
};
