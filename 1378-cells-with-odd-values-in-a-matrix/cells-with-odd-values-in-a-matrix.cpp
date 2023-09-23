class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> ans(m , vector<int>(n,0));
        for(int i = 0; i < indices.size(); i++){
            for(int j = 0; j < 2; j++){
                if(j == 0){
                    int ind = indices[i][0];
                    int k = 0;
                    while(k < n){
                        ans[ind][k] += 1;
                        k++; 
                    }
                }
                else if(j == 1){
                    int ind = indices[i][1];
                    int k = 0;
                    while(k < m){
                        ans[k][ind] += 1;
                        k++; 
                    }
                }
                
            }
        }
        //finding odd value in matrix
        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(ans[i][j] % 2 != 0){
                    count += 1;
                }
            }
        }
        return count;
        
    }
};