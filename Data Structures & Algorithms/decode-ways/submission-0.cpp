class Solution {
    unordered_set<string> m {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", 
    "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26"};
public:
    int numDecodings(string s) {
        
        int size = s.size();
        vector<int> dp(size + 1, 0);


        if(s.size() == 1 && s[0] == '0') return 0;
        else if(s.size() == 1) return 1;

        dp[0] = 1;
        if (m.contains(string(1, s[0]))) {
            dp[1] = 1;
        }
        
        for (int i = 2; i <= size; ++i) {
            string single_char = string(1, s[i-1]);
            if (m.contains(single_char)) {
                dp[i] += dp[i-1];
            }

            string double_char = s.substr(i-2, 2);
            if (m.contains(double_char)) {
                dp[i] += dp[i-2];
            }
        }

        return dp[size];
    }
};
