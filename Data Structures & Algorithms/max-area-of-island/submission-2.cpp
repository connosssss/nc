class Solution {

    set<pair<int,int>> directions {{0,1}, {0,-1}, {1,0}, {-1, 0}};
    int max {};

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i = 0; i< grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    
                    max = std::max(dfs( grid, i, j), max);
                }
            }
        }
        for(auto v : grid){
            for(auto e : v){
                cout<<e<< " ";
            }
            cout<<endl;
        }
        return max;
    }

    int dfs( vector<vector<int>>& grid, int i, int j){
        

        

        if(!(0<= i && i < grid.size() && 0<=j && j <grid[0].size() && grid[i][j] == 1)){
            return 0;
        }

        grid[i][j] = 0;
        int res = 1;
           
        for(auto dir: directions){ 
            int newi = i + dir.first, newj = j + dir.second;
            res += dfs( grid, newi, newj);

        }
        return res;
    }
};
