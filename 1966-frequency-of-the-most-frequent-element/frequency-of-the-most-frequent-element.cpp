class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // sort the array to perform increase operation by 1 in any element other than max element
        sort(nums.begin(),nums.end()); // {1,4,8,13} 0,1,2,3 ans = 2
        // target frequency element is max element of array
        int n = nums.size();
        int ans = 0;
        int count = 1;
        for(int i = n-1; i >= ans; i--){
            int temp = k;
            int max = nums[i]; // max = 13 , k = 5
            count = 1; // counting frequency in array
            for(int j = i-1; j >= 0 && temp > 0; j--){
                // 13-8 = 5*
                // k -= (5*) >= 0
                if( (temp -= max - nums[j]) >= 0 ){
                    count += 1;
                }
            }
            if(ans < count){
                ans = count;
            }
        }
        
        return ans;
    }
};