class KthLargest {

    priority_queue<int, vector<int>, greater<int>> minHeap;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        vector<int> copy = nums;
        this->k = k;

        minHeap = priority_queue<int, std::vector<int>, std::greater<int>> (std::greater<int>(), nums);
        while(minHeap.size() > k){
            minHeap.pop();
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size() > k) minHeap.pop();
        return minHeap.top();
    }
};
