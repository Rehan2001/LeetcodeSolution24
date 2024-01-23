class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < n-2; i++){
            // stop duplicate
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = n-1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    //stop duplicate
                    while(nums[j] == nums[j-1] && j < k){
                        j++;
                    }
                    while(nums[k] == nums[k+1] && j < k){
                        k--;
                    }
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return res;
    }
};