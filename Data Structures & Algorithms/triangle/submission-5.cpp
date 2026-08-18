class Solution {

    //map<pair<int, int>, int> memo;
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size() == 0) return 0;

        int i = triangle.size() -2;
        int j = triangle[i+1].size()-2;
        cout<< i << " "<< j<<endl<<endl;
        for(; i>= 0; i -=1){
            cout<<"I LOOP # "<<i;

            for(int t = j; t>=0; --t){
                cout<< i<< " "<<t<<endl;

                triangle[i][t] = triangle[i][t] + min(triangle[i+1][t],triangle[i+1][t+1]);
            }
            j--;

        }

        for(auto e : triangle){
            for(auto f : e){
                cout<<f<<" ";

            }
            cout<<endl;
        }
        
        return triangle[0][0];


       // return dfs(triangle, 0, 0);
    }

   /* int dfs(vector<vector<int>>& triangle, int layer, int i){
        if(memo.contains({layer, i})) return memo[{layer, i}];
        if(layer >= triangle.size() || i >= triangle[layer].size()) return 0;

        int res = min(dfs(triangle, layer+1, i), dfs(triangle, layer+1, i+1)) + triangle[layer][i];
        memo[{layer, i}] = res;
        return res;
    } */
};