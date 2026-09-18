class KthLargest {

    priority_queue<int, vector<int>, greater<int>> minHeap;

public:
    KthLargest(int k, vector<int>& nums) {
        vector<int> copy = nums;
        minHeap = priority_queue<int, std::vector<int>, std::greater<int>> (std::greater<int>(), nums);
        while(minHeap.size() > k){
            minHeap.pop();
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        minHeap.pop();
        return minHeap.top();
    }
};
