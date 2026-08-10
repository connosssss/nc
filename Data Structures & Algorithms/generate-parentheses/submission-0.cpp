class Solution {
    int len;
    vector<string> res;
public:
    vector<string> generateParenthesis(int n) {
        len = n;
        string s {"("};

        dfs(0,1,s);
        return res;
    }

    void dfs(int closed, int open, string substring){
        if((open == len && closed == len) ) {
            res.push_back(substring);
            return;
        }
        if(closed > open || closed > len ||open > len) return;

        dfs(closed, open + 1, substring += "(");
        substring.pop_back();
        dfs(closed+1, open, substring += ")");


        return;


    }
};
