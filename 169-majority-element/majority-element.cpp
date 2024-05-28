class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        sort(nums.begin(), nums.end());
        if(nums.size() == 1){
            ans = nums[0];
        }
        else{
            int count = 1;
            for(int i = 0; i < nums.size()-1; i++){
                    if(nums[i] == nums[i+1]){
                        count++;
                        if( count > (nums.size()/2) ){
                            ans = nums[i];
                            break;
                        }
                    }
                    else{
                        count = 1;
                    }
            }
        }
        
        return ans;
    }
};