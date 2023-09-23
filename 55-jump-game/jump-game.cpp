class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool ans;
        int  n = nums.size();
        int goal = n-1; // last index of nums array
        int count = 0; // used for couting how many zero we cross in nums array
        for(int i = n-2; i >= 0; i--){
            int temp = nums[i];
            if(temp > count){
                goal = i;
                count = 0;
            }
            else{
                count += 1;
            }
        }
        if(goal == 0){
            ans = true;
        }
        else{
            ans = false;
        }
        
        return ans;
    }
};