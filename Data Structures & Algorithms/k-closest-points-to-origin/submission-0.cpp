class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>> q;

        for(auto point : points){
            q.push({static_cast<double>(sqrt(point[0]*point[0] + point[1]* point[1])), point});

            while(k < q.size()){
                q.pop();
            }
        }

        vector<vector<int>> temp;
        while(!q.empty()) {temp.push_back(q.top().second); q.pop();}

        return temp;
    }
};
