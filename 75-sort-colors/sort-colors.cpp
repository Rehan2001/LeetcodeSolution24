class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n == 1){
            nums;
        }
        else{
                for(int i = 0; i < n; i++){
                    int lastIndx = n-i-1;

                    //finding max index
                    int maxI = 0;
                    for(int j = 1; j <= lastIndx; j++){
                        if(nums[j] > nums[maxI]){
                            maxI = j;
                        }
                    }
                    
                    // swapping the element
                    int temp = nums[lastIndx];
                    nums[lastIndx] = nums[maxI];
                    nums[maxI] = temp;
            }
        }

    }
};