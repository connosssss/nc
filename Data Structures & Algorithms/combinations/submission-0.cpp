class Solution {
    vector<vector<int>> res {};
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp {};
        backtrack(n,k,1, temp);
        return res;
    }


    void backtrack(int n, int k, int index, vector<int>& cur){
        if(cur.size() == k) {
            res.push_back(cur);
            return;
        }
        if(index > n) return;

        cur.push_back(index);
        backtrack(n, k, index + 1, cur);
        cur.pop_back();
        backtrack(n, k, index + 1, cur);

    }
};