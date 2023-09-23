class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n));
        int t = 0; // top
        int r = n-1; //right
        int b = n-1; // bottom
        int L = 0; // left
        // logic
        int flag = 1;
        while(true){
            //upper row
            for(int j = L; j <= r; j++){
                mat[t][j] = flag;
                flag += 1;
            }
            t++;
            if(t > b){
                break;
            }

            //right column
            for(int i = t; i <= b; i++){
                mat[i][r] = flag;
                flag += 1;
            }
            r--;
            if(L > r){
                break;
            }

            //Lower row
            for(int j = r; j >= L; j--){
                mat[b][j] = flag;
                flag += 1;
            }
            b--;
            if(t > b){
                break;
            }
            
            //front column
            for(int i = b; i >= t; i--){
                mat[i][L] = flag;
                flag += 1;
            }
            L++;
            if(L > r){
                break;
            }
            
        }
        return mat;
    }
};