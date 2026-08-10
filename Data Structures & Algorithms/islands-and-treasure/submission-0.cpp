class Solution {

    vector<pair<int,int>> directions {{0,1}, {1,0}, {-1,0}, {0,-1}};
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;

        for(int i {}; i<grid.size(); i++)
            for(int j {}; j<grid[0].size(); j++)
                if(grid[i][j] == 0) q.push({i,j});

        int distance = 1;
        while(!q.empty()){

            for(int z = q.size(); z>0; z--){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            for(auto dir : directions){
                int newi = i + dir.first;
                int newj = j + dir.second;

                if(newi < 0 || newi >= grid.size() || newj < 0 || newj >= grid[0].size() || grid[newi][newj] != 2147483647) continue;

                grid[newi][newj] = distance;
                q.push({newi, newj});
                cout<<newi<< " "<<newj << " distance" << distance<<endl;

            }
            }
            ++distance;

        }


    }
};
