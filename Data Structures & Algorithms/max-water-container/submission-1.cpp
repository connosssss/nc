class Solution {
public:
    int maxArea(vector<int>& heights) {
        int len = static_cast<int>(heights.size()-1);
        int l {}, r {len};
        int max {};



        while(l<r){
            
            max = std::max((r-l)*min(heights[l], heights[r]), max);

            if(heights[r] > heights[l]) l++;
            else r--;
        }

        return max;
    }
};
