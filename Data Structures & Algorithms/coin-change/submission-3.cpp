class Solution {

    map<int, int> memo;
public:
    int coinChange(vector<int>& coins, int amount) {
        return dfs(amount, coins);

    }


    int dfs(int cur, vector<int>& coins){
        if(cur < 0) return -1;
        if(cur == 0) return 0;
        if(memo.contains(cur)) return memo[cur];

        
        int minCoins = 100000;

        vector<int> temp;
        for(auto& coin : coins){
           int res = dfs(cur - coin, coins);
            
            if (res != -1) {
                minCoins = min(minCoins, res + 1);
            }
        }

        memo[cur] = (minCoins == 100000) ? -1 : minCoins;
        return memo[cur];

    }

};
