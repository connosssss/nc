class Solution {
    bool res {false};
    vector<pair<int,int>> directions {{0,1}, {1,0},{-1,0},{0,-1}, {0,0}};
public:
    bool exist(vector<vector<char>>& board, string word) {
        set<pair<int,int>> seen;

        for(int i {}; i<board.size(); ++i)
            for(int j {}; j<board[0].size(); ++j){

                if(board[i][j] == word[0]){
                    search(board, word, i, j, 0, seen);
                    if(res) return true;
                }

            }

        return res;
    }

    void search(vector<vector<char>>& board, string& word, int i, int j, int index, set<pair<int,int>>& seen){
        if(index >= word.size() && seen.size() == word.size()){
            res = true; 
            return;
        }

        for(auto dir : directions){
            int ni = i+dir.first, nj = j+dir.second;

            if(ni >= 0 && ni < board.size() && nj >= 0 && nj < board[0].size() && word[index] == board[ni][nj] && !seen.contains({ni,nj})){
                seen.insert({ni,nj});
                search(board, word, ni, nj, index + 1, seen);
                seen.erase({ni, nj});
            }
        }



    }
};
