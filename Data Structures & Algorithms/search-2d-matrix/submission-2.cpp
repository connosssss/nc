class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        

        int rowLen = matrix.size()-1;
        int l {}, r {rowLen}, m {};
        int row {-1};


        while(l<=r){
            m = (r-l)/2 + l;
            if(matrix[m][0] <= target && target <= matrix[m][matrix[m].size()-1]){
                row = m; 
                break;
            }
            else if(matrix[m][0] < target) l = m+1;
            else r = m-1;
            
        }
        if(row == -1){
            cout<<"fail";
            return false;
        }
        cout<<row<<endl;
        l = 0, r = matrix[row].size()-1, m = (r-l)/2 + l;
        

        while(l<=r){
            cout<< "m: " << m << endl;
            m = (r-l)/2 + l;
            if(matrix[row][m] == target) return true;

            if(matrix[row][m] < target) l = m + 1;
            else r = m-1;
        }

        return false;

    }
};
