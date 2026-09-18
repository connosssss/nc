class Solution {
    struct Node {
        int parent = -1;
        int value = -1;
    };
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> parents;
        int res {};


        for(int i {}; i<n; i++){
            parents.push_back(i);
        }

        for(int i {}; i< edges.size(); i++){
            auto edge = edges[i];
            int par = parents[edge[0]];
            
            if(edge[0] == par){
                res++;
                

            }
            parents[edge[1]] = edge[0];

        }


        return res;
    }




   
};
