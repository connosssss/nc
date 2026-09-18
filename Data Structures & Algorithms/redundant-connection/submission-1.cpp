class Solution {
    
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parents (n);
        for(int i {}; i< n; i++){
            parents[i] = i;


        }


        for(auto edge : edges){
            if(parents[edge[0]-1] == parents[edge[1]-1]) return edge;


            parents[edge[1]-1] = parents[edge[0]-1];
        }

        return {};
    }

    
};
