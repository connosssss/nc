class Solution {
    int res {};

public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<int> t (text2.size()+1); //hoping it copies
        vector<vector<int>> dp (text1.size()+1, t);

        explore(text1, text2, 1, 1, dp);

        for(auto e : dp){
            for(auto p : e) cout<<p<<" ";
            cout<<endl;
        }

        return res;
        
    }


    void explore(string& word1, string& word2, int p1, int p2, vector<vector<int>>& dp){
        if(p1-1 == word1.size() || p2-1 == word2.size()) return;
        
        dp[p1][p2] = max({dp[p1-1][p2],dp[p1][p2-1],dp[p1-1][p2-1]});
        
        if(word1[p1-1] == word2[p2-1]){
            dp[p1][p2]++;
            res = max(res, dp[p1][p2]);
            explore(word1, word2, p1+1, p2+1, dp);

            return;

        }

        explore(word1, word2, p1, p2+1, dp);
        explore(word1, word2, p1+1, p2, dp);
    }


    
};
