class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans;
        int sum = 0;
        int prevDiff = INT_MAX;
        for(int i = 0; i < n-2; i++){
            int j = i+1;
            int k = n-1;
            while( j < k ){
                int prevSum = sum;
                sum = nums[i] + nums[j] + nums[k];
                int currDiff = abs(sum - target);
                if(currDiff <= prevDiff){
                    prevDiff = currDiff;
                    ans = sum;
                }
                // updating j or k
                if(sum > target){
                    k--;
                }
                else if(sum < target){
                    j++;
                }
                else{
                    ans = sum;
                    break;
                }
            }
            
        }
        return ans;

    }
};
