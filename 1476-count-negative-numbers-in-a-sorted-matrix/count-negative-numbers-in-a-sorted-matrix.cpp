class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int r = 0;// row
        int c = m-1;//col
        int count = 0; // count +ve num
        while(r < n && c >= 0){
            if(grid[r][c] >= 0){
                count += c + 1;
                r++;
            }
            else{
                c--;
            }
        }
        int ans = (n*m) - count;// toal -ve number
        return ans;
        
    }
};