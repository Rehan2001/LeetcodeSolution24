class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        // col pointing of specific element
        int c = 0;
        // row pointing of specific element
        int r = 0;
        // start checking from 1st element 
        int count;
        while(r <= row-1 && c <= col-1){
            count = 0;
            //check to left
            if( c > 0 && mat[r][c-1] > mat[r][c] ){
                c -= 1;
                count += 1;
            }
            //check to right
            else if( c < col-1 && mat[r][c] < mat[r][c+1] ){
                c += 1;
                count += 1;
            }
            //check to top
            else if( r > 0 && mat[r-1][c] > mat[r][c] ){
                r -= 1;
                count += 1;
            }
            //check to bottom
            else if( r < row-1 && mat[r][c] < mat[r+1][c] ){
                r += 1;
                count += 1;
            }

            if(count == 0){
                break;
            }
        }
        
        return vector<int>{r,c};
         
    }
};