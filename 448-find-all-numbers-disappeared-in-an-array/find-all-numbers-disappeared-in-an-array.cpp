class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n+1,0);
        sort(nums.begin(),nums.end()); 
        // 1,2,2,3,3,4,7,8
        // 0,1,2,3,4,5,6,7
        // counting how many times each element in nums array
        for(int i = 0; i < n; i++){
            int temp = nums[i];
            res[temp] += 1; 
        }
        // missing number is always zero on their position in res array
        vector<int> ans;
        for(int i = 1; i < n+1; i++){
            if(res[i] == 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};