class Solution {

    vector<pair<int, int>> directions {{1,1}, {1,0}, {1, -1}, {0,1}, {0,-1}, {-1, 1}, {-1, 0}, {-1,-1}};
    set<pair<int, int>> visited {};

public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        
        int n = grid.size();
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;


        for(int i {}; i<n; i++){
            for(int j {}; j<n; j++){
                if(grid[i][j] == 0)
                grid[i][j] = 10001;

            }
        }
        grid[n-1][n-1] = 1;
        search(grid, n-1, n-1);
        cout<<"size "<< visited.size()<<endl;
        for(auto v : grid){
            for (auto e : v)
            cout << e<<" ";
            cout<<endl;
        }
        return grid[0][0] == 10001 ? -1 : grid[0][0];
        
        
    }

    void search(vector<vector<int>>& grid, int i, int j){

        int n = grid.size();
        pair<int, int> temp = {i, j};
            if(visited.contains(temp)) return;

        for(auto& dir : directions){
            int newi = i+ dir.first, newj = j+dir.second;
            

            if(newi == 2 && newj == 2 && i == 1 && j == 1) cout<<"SEEN"<<endl;
            if(newi >= 0 && newi < n && newj >= 0 && newj < n){
                if((grid[newi][newj] == 1 && newi == n-1 && newj == n-1) || grid[newi][newj] != 1){

                    grid[i][j] = min(grid[i][j], grid[newi][newj] + 1);

                }

        
               visited.insert(temp);

                search(grid, newi, newj);

            }


        }



    }


    
};