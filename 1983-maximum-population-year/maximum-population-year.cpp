class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> ans(101,0);
        for(int i = 0; i < logs.size(); i++){
            int inds = logs[i][0] - 1950;
            int indl = logs[i][1] - 1950;
            for(int j = inds; j < indl; j++){ // j for marking year
                if(ans[j] != 0){
                    ans[j] = ans[j] + 1;
                }
                else{
                    ans[j] = 1;
                }
            }
        }
        //finding max value in each year
        int max = 0;
        int ind;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] > max){
                max = ans[i];
                ind = i;
            }
        }
        int result = 1950 + ind;
        return result;
    }
};