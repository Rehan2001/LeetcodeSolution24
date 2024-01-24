class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i <= n-4; i++){
            // stop duplicate of i
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            for(int j = i+1; j <= n-3; j++){
                // stop duplicate of j
                if(j > (i + 1) && nums[j] == nums[j - 1]) continue;

                int k = j+1;
                int e = n-1;
                while(k < e){
                    long long int sum = nums[i];
                    sum += nums[j];
                    sum += nums[k]; 
                    sum += nums[e];
                    if(sum == target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[e]});
                        int low = nums[k];
                        int high = nums[e];
                        k++;
                        e--;
                        //stop duplicate of k & e
                        while(nums[k] == low && k < e) k++;
                        while(nums[e] == high && k < e) e--;
                    }
                    else if(sum > target) e--;
                    else k++;
                }
            }
        }
        return ans;
    }
};