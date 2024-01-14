class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans = false;
        int row = matrix.size();
        int col = matrix[0].size();
        int L = 0; // first row
        int R = col-1; // last column
        while(L < row && R >= 0 ){
            int check =  matrix[L][R]; // 7
            if(check > target){
                R -= 1;
            }
            else if(check < target){
                L += 1;
            }
            else{ // check == target
                ans = true;
                break;
            }
        }
        return ans;

    }
};