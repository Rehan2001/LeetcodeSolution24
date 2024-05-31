class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        if(nums.size() == 1){
            return ans;
        }
        else{
            sort(nums.begin(),nums.end());
            int count = 1;
            for(int i = 0;  i < nums.size()-1; i++){
                if(nums[i] == nums[i+1]){
                    count++;
                    if(count == 2){
                        ans.push_back(nums[i+1]);
                        count = 1;
                    }
                }
            }
        }

        return ans;
        
    }
};