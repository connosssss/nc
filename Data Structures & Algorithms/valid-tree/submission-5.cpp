class Solution {
    map<int, set<int>> nodes;
    set<int> visited {};
    bool res {true};
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        for(auto edge : edges){

            sort(edge.begin(), edge.end());
            nodes[edge[0]].insert(edge[1]);
        }

        dfs(0);

        return nodes.empty() ? res : false;
    }

    void dfs(int node){
        if(!res) return;
        if(visited.contains(node) ){
            res = false;
            return;
        }

        visited.insert(node);

        for(auto n : nodes[node]){
            dfs(n);
        }

        //nodes.erase(node);

        

        
    }
};
