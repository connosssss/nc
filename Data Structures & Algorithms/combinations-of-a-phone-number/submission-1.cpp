class Solution {
    map<char, string> dict {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
    vector<string> res;
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return res; 
        
        string temp {};
        dfs(digits, temp, 0, 0);
        return res;
    }

    void dfs(string& digits, string& curstring, int dindex, int sindex){

        if (dindex >= digits.size()) {
            res.push_back(curstring);
            return;
        }
        if (sindex >= dict[digits[dindex]].size()) {
            return;
        }

        curstring.push_back(dict[digits[dindex]][sindex]); 
        dfs(digits, curstring, dindex + 1, 0);
        curstring.pop_back();

        dfs(digits, curstring, dindex, sindex + 1);

    }
};