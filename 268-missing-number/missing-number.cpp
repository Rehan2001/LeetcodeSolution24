class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = -1;
        sort(nums.begin(), nums.end());
        // finding missing number b/w [0,n] 0,1,3
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i){
                ans = i;
                break;
            }
        }
        // if  [0, n-1] all present
        if(ans == -1){
            ans = nums.size();
        }
        
        return ans;
        
    }
};