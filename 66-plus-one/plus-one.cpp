class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans(digits.begin(), digits.end());
        int carr = 1;
        for(int i = n-1; i >= 0; i--){
            if(ans[i] == 9){
                if(i == 0){
                    ans[i] = 1;
                    ans.push_back(0);
                }
                else{
                    ans[i] = 0;
                }
            }
            else{
                ans[i] += 1;
                break;
            }
        }
        
        return ans;
    }
};