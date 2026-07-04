class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        vector<int> res;

        for(auto num : nums){
           m[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        for (auto entry : m) {

            heap.push({entry.second, entry.first});

            if (heap.size() > k) {
                heap.pop();
            }
        }

        for (int i = 0; i < k; i++) {
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;

    }
};
