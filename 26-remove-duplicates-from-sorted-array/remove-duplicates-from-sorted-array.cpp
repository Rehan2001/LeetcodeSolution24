class Solution {
public:
void Del(vector<int>& arr , int n , int j){
    for(int i = j; i < n; i++){
        arr[i] = arr[i+1];
    }
}
    int removeDuplicates(vector<int>& nums) {
    //finding dublicate
    int m = nums.size();
    int i = 0;
        while(i < m-1){ 
            if(nums[i] == nums[i+1]){
                    m = m - 1; 
                    Del(nums , m , i);
                }
            else{
                i++;
            }
        }
        return m;
    }
};