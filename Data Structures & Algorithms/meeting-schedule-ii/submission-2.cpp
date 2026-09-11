/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.size() == 0) return 0; 
        if(intervals.size() == 1) return 1;
        sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b){return a.start < b.start;});

        map<int, int> store {};
        int res{};
        int maxe {intervals[0].end}, mine {intervals[0].start};

        for(auto i : intervals){
            store[i.start] += 1;
            store[i.end] -=1;

            mine = min(mine, i.start);
            maxe = max(maxe, i.end);
        }

        int cur {};
        for(int i {mine}; i< maxe + 1; i++){
            if(store.contains(i)){
                cur += store[i];
             res = max(res, cur);
            }
        }



        return res;
    }
};
