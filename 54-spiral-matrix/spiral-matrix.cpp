class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty()) {
            return result;
        }
        int t = 0; // top
        int r = matrix[0].size()-1; //right
        int b = matrix.size()-1; // bottom
        int L = 0; // left
        while(true){
            //upper row
            for(int j = L; j <= r; j++){
                result.push_back(matrix[t][j]);
            }
            t++;
            if(t > b){
                break;
            }

            //right column
            for(int i = t; i <= b; i++){
                result.push_back(matrix[i][r]);
            }
            r--;
            if(L > r){
                break;
            }
            
            //Lower row
            for(int j = r; j >= L; j--){
               result.push_back(matrix[b][j]);
            }
            b--;
            if(t > b){
                break;
            }

            //front column
            for(int i = b; i >= t; i--){
               result.push_back(matrix[i][L]);
            }
            L++;
            if(L > r){
                break;
            }
        }
        return result;
    }
};