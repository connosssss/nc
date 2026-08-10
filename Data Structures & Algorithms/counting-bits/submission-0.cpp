class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res (n+1);
        for(int i {}; i<=n; i++){
            for(int j {}; j<32; j++){
                if((1<<j) & i) res[i]++;
            }
        }


        return res;
    }
};
