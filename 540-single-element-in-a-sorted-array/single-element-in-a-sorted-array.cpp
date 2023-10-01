class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans;
        int n = nums.size();
        if(n == 1){
            ans = nums[0];
        }
        else{

            int s = 0;
            int e = n-1;
            while(s <= e){
                int mid = s + (e-s)/2;
                if(mid != 0 && nums[mid] == nums[mid-1]){
                    if(mid % 2 == 0){
                        e = mid-1;
                    }
                    else{
                        s = mid + 1;
                    }
                }
                else if(mid != n-1 && nums[mid] == nums[mid+1]){
                    if(mid % 2 == 0){
                        s = mid+1;
                    }
                    else{
                        e = mid-1;
                    }
                }
                else{
                    ans = nums[mid];
                    break;
                }
            }
        }
        
        return ans;
    }
};