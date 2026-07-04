class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int> temp = stones;
        priority_queue<int, vector<int>> pq;

        for(int e : stones) pq.push(e);

        while(pq.size() > 1){
            int s1 = pq.top();
            pq.pop();
            int s2 = pq.top();
            pq.pop();

            int res = s1-s2;
            pq.push(res);
        }

       
        return pq.top();
    }
};
