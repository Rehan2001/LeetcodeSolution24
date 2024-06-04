class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max;
        sort(nums.begin(),nums.end(), greater<int>());
        max = (nums[0]-1) * (nums[1]-1);
        return max;

    }
};