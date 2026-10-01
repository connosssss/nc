#include <vector>
#include <utility>

using namespace std;

struct UF {
    int n {};
    vector<int> rank;
    vector<int> parents;

    UF(int n) : n{n} {
        parents.resize(n);
        rank.assign(n, 1);

        for (int i = 0; i < n; ++i) {
            parents[i] = i;
        }
    }

    int Find(int node) {
        if (parents[node] != node) {
            parents[node] = Find(parents[node]); 
        }
        return parents[node];
    }

    bool Union(int node1, int node2) {
        int pu = Find(node1);
        int pv = Find(node2);

        if (pu == pv) return false; 

        if (rank[pu] < rank[pv]) {
            swap(pu, pv);
        }

        rank[pu] += rank[pv];
        parents[pv] = pu;
        return true;
    }
};

class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if (edges.size() != n - 1) {
            return false;
        }

        UF uf(n);

        for (const auto& edge : edges) {
            if (!uf.Union(edge[0], edge[1])) {
                return false;
            }
        }

        return true;
    }
};