class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int ans = -1;
       int s = 0;
       int e = nums.size()-1;
       while(s <= e){
           int mid = s + (e-s)/2;
           if(target > nums[mid]){
               s = mid + 1;
           }
           else if(target < nums[mid]){
               ans = mid;
               e = mid - 1;
           }
           else{
               ans = mid;
               break;
           }
       }
       if(ans == -1){
           ans = e + 1;
       }
       return ans;
        
    }
};