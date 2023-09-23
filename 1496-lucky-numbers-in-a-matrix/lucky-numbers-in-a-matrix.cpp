class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ansR;
        vector<int> ansC;
        // min for row
        for(int i = 0; i < m; i++){
            int Min = INT_MAX;
            for(int j = 0; j < n; j++){
                //for finding minimum element in each row
                Min = std::min(matrix[i][j] , Min); 
            }
            ansR.push_back(Min);
        }
        // max for column
        for(int i = 0; i < n; i++){
            int Max = INT_MIN;
            for(int j = 0; j < m; j++){
                // for finding maximum element in each column
                Max = std::max(matrix[j][i] , Max); 
            }
            ansC.push_back(Max);
        }
        //finding same element in booth ansR & ansC for luckey number
        vector<int> res;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(ansR[i] == ansC[j]){
                    res.push_back(ansR[i]);
                }
            }
        }
        return res;  
    }
};