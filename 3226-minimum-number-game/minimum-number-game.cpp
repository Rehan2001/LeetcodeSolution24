class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end()); // 2,3,4,5
        int Alice;
        int Bob;
        for(int i = 0; i < nums.size()-1; i += 2){
            int Alice = nums[i];
            int Bob = nums[i+1];
            res.push_back(Bob);
            res.push_back(Alice);
        }

        return res;
        
    }
};