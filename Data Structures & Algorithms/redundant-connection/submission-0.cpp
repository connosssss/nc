class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

     map<int, int> id{};
     


     for (auto edge : edges){
        if(id.contains(edge[1])) return edge;
        id[edge[1]] += 1;
     } 


     return {};
    }
};
