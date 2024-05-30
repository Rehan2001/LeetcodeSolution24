class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int ans;
        // sort in decreasing order
        sort(nums.begin(), nums.end(), greater<int>());
        if(nums.size() < 3){
            ans = nums[0];
        }
        else{
            // 3,2,1*,0 // 3,3,3*,1 // 3,2,2*,1 // 3,2,1*,1 // 3,2,2*,2
            int count = 1;
            for(int i = 0; i < nums.size()-1; i++){
                // count 1 if next element is not similar to previous element 
                if(nums[i] != nums[i+1]){
                    count++;
                    if(count == 3){
                        ans = nums[i+1];
                        break;
                    }
                }
            }
            // if count != 3 then print max element
            if(count != 3){
                ans = nums[0];
            }
        }

        return ans;
    }
};