class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> ans;
        int n = intervals.size();
        for(int i = 0; i < n; i++){
            int end = intervals[i][1];//end time
            //start >= end for each intervals
            int ind = 0;
            int start = INT_MAX;
            for(int j = 0; j < n; j++){
                if(end <= intervals[j][0] && start > intervals[j][0]){
                    start = intervals[j][0];
                    ind = j;
                }
            }
            if(start == INT_MAX){
                ans.push_back(-1);
            }
            else{
                ans.push_back(ind);
            }
        }
        return ans;
        
    }
};