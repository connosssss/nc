class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int res {};
        int pStart = intervals[0][0], pEnd = intervals[0][1];
        unordered_set<int> removed{};


        for(int i {1}; i< intervals.size(); ++i){
            int start = intervals[i][0], end = intervals[i][1];

            if(pEnd > start){
                res++;
                removed.insert(i);
                continue;
            }
            int spot = i -1;

            while(removed.contains(spot)) spot--;


            pStart = intervals[spot][0], pEnd = intervals[spot][1];



        }


        return res;
    }
};
