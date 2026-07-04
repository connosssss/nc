class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res {0};


        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    ++res;
                    dfs(grid, i, j);
                }

            }


        }

        return res;
    }

    void dfs(vector<vector<char>>& grid, int i, int j){
        int maxL = grid.size(), maxW = grid[0].size();
        set<pair<int,int>> directions {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};


        grid[i][j] = '0';
        for(auto dir : directions){
            int newi = i+dir.first, newj = j+dir.second;

            if((newi >= 0 && newi < maxL) && (newj >= 0 && newj < maxW) && grid[newi][newj] == '1'){
                dfs(grid, newi, newj);
            }
        }

    }
};
