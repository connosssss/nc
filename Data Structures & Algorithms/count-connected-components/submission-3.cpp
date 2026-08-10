class Solution {
    int findRoot(int i, const vector<int>& parents) {
        while (i != parents[i]) {
            i = parents[i];
        }
        return i;
    }

public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> parents;
        int res = n; 

        for (int i = 0; i < n; i++) {
            parents.push_back(i);
        }

        for (int i = 0; i < edges.size(); i++) {
            auto edge = edges[i];
            int root1 = findRoot(edge[0], parents);
            int root2 = findRoot(edge[1], parents);

            if (root1 != root2) {
                parents[root1] = root2;
                res--; 
            }
        }

        return res;
    }
};