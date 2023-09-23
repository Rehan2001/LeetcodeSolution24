

int numIdenticalPairs(int* nums, int numsSize){
    int ans = 0;
    for(int i = 0; i < numsSize; i++){
        for(int j = i+1; j < numsSize; j++){
            if(i != j && nums[i] == nums[j]){
                ans += 1;
            }
        }
    }
    return ans;

}