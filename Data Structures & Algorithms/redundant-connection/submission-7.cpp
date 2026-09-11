class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int n = edges.size();

        vector<int> par(n + 1), rank(n + 1, 1);
        iota(par.begin(), par.end(), 0);

        for (const auto& edge : edges) {
            if (!Union(par, rank, edge[0], edge[1]))
                return edge;
        }
        return {};
    }

    int Find(vector<int>& par, int n) {
        if(par[n] == n) return n;
        return par[n] = Find(par, par[n]);
    }

    bool Union(vector<int>& par, vector<int>& rank, int n1, int n2) {
        int p1 = Find(par, n1);
        int p2 = Find(par, n2);

        if(p2 == p1) return false;

        if(rank[p1] > rank[p2]){
            par[p2] = p1;
            rank[p1] += rank[n2];
        }
        else{
            par[p1] = p2;
            rank[p2] += rank[n1];
        }

        return true;
    }

};