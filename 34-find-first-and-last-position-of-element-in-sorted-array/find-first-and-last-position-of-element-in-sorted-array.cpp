class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> output;
        vector<int> ans;
        if(nums.size() == 0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        //finding the match element
        for(int i  = 0; i < nums.size(); i++){
            if(nums[i] == target){
                ans.push_back(i);
            }
        }
        if(ans.size() == 0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        else{
            output.push_back(ans.front());
            output.push_back(ans.back());
            return output; 
        }
     
    }
};