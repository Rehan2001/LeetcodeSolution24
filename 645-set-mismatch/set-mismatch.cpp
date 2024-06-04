class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        // repeated number
        int rep;
        int sum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            sum += nums[i];
            if(nums[i-1] == nums[i]){
                ans.push_back(nums[i]);
                rep = nums[i];
            }
        }
        // missing number 1,2,2,3,4,5,6,7,8,9 // 55 + 2 - 47 = 10
            int temp = ( n * (n+1) ) / 2; // 3 + 2 - 4 = 1 -> 21 + 3 - 23 = 1
            temp = temp + rep - sum; // 10 + 2 - 9 = 3 -> 3 + 1 - 2 = 2 
            ans.push_back(temp);

        return ans;
    }
};