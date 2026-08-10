class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end(), [](auto a, auto b){return a[0] < b[0];});

        for(int i {}; i<intervals.size()-1; ++i){
            if(intervals[i][1] >= intervals[i+1][0]){
                merge(intervals, i);
                --i;
            }
        }

        return intervals;
    }

    void merge(vector<vector<int>>& intervals, int& i){
        if(intervals[i][1] < intervals[i+1][1]) intervals[i][1] = intervals[i+1][1];
        
        intervals.erase(intervals.begin()+i+1);
    }
};
