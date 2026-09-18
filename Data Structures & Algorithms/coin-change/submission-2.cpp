class Solution {

    map<int, int> memo;
public:
    int coinChange(vector<int>& coins, int amount) {
        int minamount {10000};

        if(amount == 0) return 0;
        if(amount % coins[0] != 0) return -1;
        int temp = dfs(amount, coins);
        for(auto& p : memo) cout<< p.first<< " " << p.second<<endl;
        return temp;

    }


    int dfs(int cur, vector<int>& coins){
        if(memo.contains(cur)) return memo[cur];

        if(cur < 0) return 0;
        if(cur == 0) return 1;

        vector<int> temp;
        for(auto& coin : coins){
            temp.push_back(dfs(cur-coin, coins));
        }
        int res = *(std::min_element(temp.begin(), temp.end())) + 1;
        memo[cur] = res;

        return res;

    }

};
