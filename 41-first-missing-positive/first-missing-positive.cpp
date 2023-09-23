class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    vector<int> mark(n+1);
    mark[0] = 1;
    int ans;
    for(int i = 0; i < n; i++){
        if(nums[i] > 0 && nums[i] <= n){
            mark[nums[i]] = 1;
        }
    }
    //finding unmark index in array
    for(int i = 0; i < n+1; i++){
        if(mark[i] == 0){
            ans = i;
            break;
        }
    }

    return ans;
    
    }
};