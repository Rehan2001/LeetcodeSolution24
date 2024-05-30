class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int ans;
        sort(nums.begin(), nums.end(), greater<int>());
        // now finding the kth largest number in sorted array
        // 6,5,5,4,3,3,2,2,1
        ans = nums[k-1];

        return ans;
    }
};