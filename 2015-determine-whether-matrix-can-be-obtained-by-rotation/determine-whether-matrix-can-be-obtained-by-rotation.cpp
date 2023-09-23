class Solution {
public:

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool result;
        int n = mat.size(); // binary vector
        int check = 0;
        if(mat == target){
            return true;
        }
        for(int r = 1; r <= 3; r++){ // r for rotation
            check = 0;
            vector<vector<int>> B(n,vector<int>(n , 0));
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    B[i][j] = mat[j][n-i-1];
                    //for matching array B and target
                    if(B[i][j] == target[i][j]){
                        check = check + 1;
                    }
                }
            }
            //copying vector of B into vector mat
            mat = B;
            if(check == (n*n)){
                result = true;
                break;
            }
        }
        if(check != (n*n)){
            result = false;
        }
        
        return result;

    }
};