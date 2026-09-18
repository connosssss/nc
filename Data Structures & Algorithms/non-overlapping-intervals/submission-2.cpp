class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int res {};
        int pStart = intervals[0][0], pEnd = intervals[0][1];
        unordered_set<int> removed{};

       /* for(auto interval: intervals){
            cout<<interval[0]<<" "<<interval[1]<<endl;
        }*/

        for(int i {1}; i< intervals.size(); ++i){
            int start = intervals[i][0], end = intervals[i][1];
          //  cout<<pStart<< " "<< pEnd<<" i:"<< i<<endl;
            if(pEnd > start){
                
                res++;
                removed.insert(i);
                continue;

            }
           /* int spot = i-1;
            cout<< "spot: "<< spot<<endl;
            while(removed.contains(spot)){
                spot--;

            } 
             cout<< "new spot: "<< spot<<endl; */


            pStart = intervals[i][0], pEnd = intervals[i][1];



        }


       // for(auto e : removed) cout<<" "<< e;


        return res;
    }
};
