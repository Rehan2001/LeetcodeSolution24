class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        if(n == 0){
            ans = 0;
        }
        else if(n == 1){
            ans = nums[0];
        }
        else if(n == 2){
            ans = max(nums[0] , nums[1]);
        }
        else{
            int prev = 0;
            for(int i = 0; i < n; i++){
               int temp = max(nums[i] + prev , ans);
               prev = ans;
               ans = temp;
            }
        }

        return ans;
    }
};