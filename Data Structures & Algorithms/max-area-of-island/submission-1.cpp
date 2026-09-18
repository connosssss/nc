class Solution {

    set<pair<int,int>> directions {{0,1}, {0,-1}, {1,0}, {-1, 0}};
    int max {};

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i = 0; i< grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    grid[i][j] = 0;
                    dfs(1, grid, i, j);
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

    void dfs(int cur, vector<vector<int>>& grid, int i, int j){
        if(cur>max) max = cur;

        for(auto dir: directions){
            int newi = i + dir.first, newj = j + dir.second;

            if(0<= newi && newi < grid.size() && 0<=newj && newj <grid[0].size() && grid[newi][newj] == 1){
                grid[newi][newj] = 0;
                cur++;
                if(cur>max) max = cur;
                dfs(cur, grid, newi, newj);
            }


        }
        return;
    }
};
