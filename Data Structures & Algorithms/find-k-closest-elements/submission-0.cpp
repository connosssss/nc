class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for(auto e : arr){
            int a = abs(e-x);

            pair<int, int> temp {a, e};

            minHeap.push(temp);
        }
        vector<int> res {};
        for(int i {}; i<k; i++){
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        sort(res.begin(), res.end());
        return res;
    }
};