class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l {}, r {};
        int max {};



        while(r <heights.size()){
            max = std::max((r-l)*min(heights[l], heights[r]), max);

            if(heights[r] > heights[l]) l = r;
            else r++;
        }

        return max;
    }
};
