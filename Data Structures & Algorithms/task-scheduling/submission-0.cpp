class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> maxheap {};
        vector<int> count (26, 0);

        for(char c : tasks){
            count[c-'A']++;
        }

        for(auto c : count){
            if(c != 0) maxheap.push(c);
        }

       queue<pair<int, int>> q;
        int time = 0;

        cout<<maxheap.size()<<" "<<endl;

        while (!maxheap.empty() || !q.empty()) {
            time++;

            if (!maxheap.empty()) {

                int remaining = maxheap.top() - 1;

                maxheap.pop();
                if (remaining > 0) {
                    q.push({remaining, time});
                }
            }

            if (!q.empty() && q.front().second + n == time) {

                maxheap.push(q.front().first);
                q.pop();
            }
        }

        return time;
        

    }
};
