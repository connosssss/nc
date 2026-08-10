class Solution {
    vector<vector<int>> res;
    set <pair<int, int>> pacific;
    set <pair<int, int>> atlantic;

    vector<pair<int, int>> directions {{0,1}, {1,0}, {-1, 0}, {0,-1}};
    int w;
    int h;
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        h = heights.size();
        w = heights[0].size();

        for(int i {}; i<heights.size(); ++i){
            dfs(i, 0, true, heights);
            dfs(i, heights[0].size()-1, false, heights);
        }
        for(int j {}; j<heights[0].size(); ++j){
            dfs(0, j, true, heights);
            dfs(heights.size()-1, j, false, heights);
        }

        cout<<"Pacific: ";
        for(auto e : pacific){
            cout<<e.first<<","<<e.second<<" ";
            if(atlantic.contains(e)) {
                vector<int> temp {e.first, e.second};
                res.push_back(temp);
            }
        }

        cout<<endl<<"Atlantic: ";
        for(auto e : atlantic) cout<<e.first<<","<<e.second<<" ";

        return res;
    }



    void dfs(int i, int j, bool pacifico, vector<vector<int>>& heights){
        
        auto& visited = pacifico ? pacific : atlantic;

        if (visited.contains({i, j})) return;
        
        visited.insert({i, j});

        for(auto dir: directions){
            int newi = i+dir.first, newj = j+dir.second;
            if(newi >= 0 && newi < h && newj >= 0 && newj < w && heights[i][j] <= heights[newi][newj]){
                dfs(newi, newj, pacifico, heights);
            }
        }

    }
};
