class Solution {
    vector<vector<bool>> marked;
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i = 0; i<matrix.size(); i++){
            vector<bool> temp;
            
            for(int j = 0; j<matrix[0].size(); j++){
                temp.push_back(false);
            }
            marked.push_back(temp);
        }

        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0 && !marked[i][j]){
                    cout<<i<<" "<<j<<endl;
                    replace(matrix, i, j);

                    
                }
            }
        }


    }

    void replace(vector<vector<int>>& matrix, int i, int j){
        int h = matrix.size(); int w = matrix[0].size(); 
        
        for(int cur {}; cur < max(w, h); cur++){
            if(cur < h){
                if(matrix[cur][j] != 0) marked[cur][j] = true;
                matrix[cur][j] = 0;
                
            }
            if(cur < w){
                if(matrix[i][cur] != 0) marked[i][cur] = true;
                matrix[i][cur] = 0;
                
            }
        }
/*
        for(int i = 0; i<matrix.size(); i++){
           
            
            for(int j = 0; j<matrix[0].size(); j++){
                cout<<marked[i][j]<<" ";
            }
            cout<<endl;
            
        } */


    }
};
