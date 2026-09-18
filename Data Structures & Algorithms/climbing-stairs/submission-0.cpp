class Solution {
public:
    int climbStairs(int n) {
        vector<int> something {1, 2};

        for(int i {2}; i<n; ++i){

            something.push_back(something[i-1]+something[i-2]);
        }

        return something.back();
        
    }
};
