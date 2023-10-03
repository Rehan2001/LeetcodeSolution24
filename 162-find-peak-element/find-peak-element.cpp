class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans;
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s <= e){
                int mid = s + (e-s)/2;
                if(mid != n-1 && nums[mid] < nums[mid+1]){
                    s = mid+1;
                }
                else if(mid != 0 && nums[mid] < nums[mid-1]){
                    e = mid-1;
                }
                else{
                    ans = mid;
                    break;
                }
        }
        return ans;
    }
};