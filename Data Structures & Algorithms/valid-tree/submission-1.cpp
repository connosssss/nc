class Solution {
    unordered_set<int> visited;
   
public:
    bool validTree(int n, vector<vector<int>>& edges) {
       
       for (auto edge : edges) {
            sort(edge.begin(), edge.end());
            if(visited.contains(edge[1])) return false;
            visited.insert(edge[1]);
       }

       return true;
    }

    bool dfs(vector<int>& edge){
        
        
        

        


    }
};
