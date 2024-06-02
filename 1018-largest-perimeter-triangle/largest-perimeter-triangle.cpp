class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int sum = 0;
        int i = 0;
        while(i < nums.size()-2){
            int a = nums[i];
            int b = nums[i+1];
            int c = nums[i+2];
            // a + b > c , a + c > b , c + b > a
            if(a + b > c && a + c > b && c + b > a){
                sum = a + b + c;
                break;
            }
            else{
                i++;
            }
        }
        return sum;
    }
};