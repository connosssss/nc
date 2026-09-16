class Solution {
    vector<pair<int, int>> dir = {{0,1}, {1,0}, {-1,0}, {0,-1}};
    int res {};


public:
    int islandPerimeter(vector<vector<int>>& grid) {
        for(int i {}; i<grid.size(); ++i){
            for(int j {}; j<grid[0].size(); j++){
                if(grid[i][j] == 1) dfs(grid, i, j);
            }
        }

        return res;
    }

    void dfs(vector<vector<int>>& grid, int i, int j){
        grid[i][j] = 2;
        for(auto d : dir){
            int newi = i + d.first;
            int newj = j + d.second;
            //int temp = res; 
            int rows = (int)grid.size(), cols = (int)grid[0].size();
            if(newi < 0 || newi >= rows || newj < 0 || newj >= cols){
                res++;
                continue;
            }
            
            
            if(grid[newi][newj] == 0){
                res++;
                continue;
            }
            

            if(grid[newi][newj] == 1) dfs(grid, newi, newj);


        }

    }
};