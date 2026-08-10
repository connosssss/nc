class Solution {
    vector<pair<int,int>> directions {{0,1}, {1,0}, {-1,0}, {0,-1}};
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int fresh {};
        for(int i {}; i<grid.size(); i++){
            for(int j {}; j<grid[0].size(); j++){
                if(grid[i][j] == 2) q.push({i,j});
                if(grid[i][j] == 1) fresh++;
            }
        }

        int time {};
        while(!q.empty() && fresh > 0){
            int len = q.size();

            for(int z {}; z<len; z++){
                pair<int,int> cur = q.front();
                q.pop();
                int i = cur.first, j = cur.second;
                for(auto dir : directions){
                    int newi = i + dir.first;
                    int newj = j + dir.second;
                    if(newi < 0 || newi >= grid.size() || newj < 0 || newj >= grid[0].size() || grid[newi][newj] != 1) continue;

                    grid[newi][newj] = 2;
                    fresh--;
                    q.push({newi, newj});

                }
                
            }
            for(auto e : grid){
         for (auto a : e) 
         cout<< a<< " ";
            cout << endl;
         }
            time++;
         cout<<"TIME: " << time<<endl;

        }

        for(auto e : grid){
         for (auto a : e) 
         cout<< a<< " ";
            cout << endl;
         }
         cout<<time<< " "<< fresh;

        return fresh == 0 ? time : -1;
    }

    
};
