class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp = heights;
        sort(temp.begin(),temp.end());
        // comparing both temp and heights
        int ans = 0;
        for(int i = 0; i < heights.size(); i++){
            if(temp[i] != heights[i]){
                ans += 1;
            }
        }

        return ans;
    }
};