class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> ans(n+1);
        int sum = 0;
        ans.push_back(sum);
        for(int i = 0; i < n; i++){
            sum = sum + gain[i];
            ans.push_back(sum);
        }
        //max value in ans vector
        int max = INT_MIN;
        for(int i  = 0; i < ans.size(); i++){
            if(ans[i] >= max){
                max = ans[i];
            }
        }
        return max;
    }
};