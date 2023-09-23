class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int n = candies.size();
        for(int i = 0; i < n; i++){
            int sum = 0;
            sum = candies[i] + extraCandies;
            int count = 0;
            for(int j = 0; j < n; j++){
                if(sum >= candies[j]){
                    count  += 1;
                }
            }
            if(count == n){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};