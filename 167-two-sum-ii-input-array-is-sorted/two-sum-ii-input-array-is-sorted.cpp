class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int> ans;
       int l = 0;
       int r = numbers.size()-1;
       while(l <= r){
           int sum = numbers[l] + numbers[r];
           if(sum > target){
               r = r - 1;
           }
           else if(sum < target){
               l = l + 1;
           }
           else{
               ans = {l+1 , r+1};
               break;
           }
       }
       return ans;

    }
};