class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
     int  sum = 0;
     int n = mat.size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j){
                sum += mat[i][j];
            }
        }
        sum = sum + mat[i][n-i-1]; 
    }
    //condition of odd matrix
    if (n%2 == 1){
        int mid = n / 2;
        sum = sum - mat[mid][mid];
    }  
    return sum; 
    }
};