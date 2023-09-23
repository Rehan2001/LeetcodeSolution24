class Solution {
public:
    int findNumbers(vector<int>& nums) {
     int count = 0;
    for(int i = 0; i < nums.size(); i++){
        int flag = 0;
        while(nums[i] != 0){
            nums[i] = nums[i]/10;
            flag = flag + 1;
        }
        if(flag%2 == 0){
            count = count + 1;
        }  
    } 
    return count;
        
    }
};