class Solution {
public:
//Update function
    void UpdateZero(vector<vector<int>>& matrix, int ind, int jnd){
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(i == ind || j == jnd){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> copy(matrix.begin(), matrix.end());
        //finding index of value 0
        for(int i = 0; i < copy.size(); i++){
            for(int j = 0; j < copy[0].size(); j++){
                if(copy[i][j] == 0){
                    //calling function to update zero in ans matrix
                    UpdateZero(matrix , i , j);
                }
            }
        }
    }
};