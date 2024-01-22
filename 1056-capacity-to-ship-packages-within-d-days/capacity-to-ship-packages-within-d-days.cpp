class Solution {
public:
    bool LW(vector<int>& nums, int Mid, int Days){
        int currSum = 0;
        int count = 1;
        for(int i = 0; i < nums.size(); i++){
            currSum += nums[i];
            if(currSum > Mid){
                count++;
                currSum = nums[i];
            }
        }
        if(count <=  Days){
            return true;
        }
        return false; 
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        // L- Lower weight needed
        int L = *max_element(weights.begin(), weights.end());
        // H- Highest weight needed 
        int H = accumulate(weights.begin(), weights.end(), 0);
        // to check previous answer is less of not
        int prev = H;
        int ans = H;
        while(L <= H){
            int mid = L + (H-L)/2;
            //checking choosen mid value is sufficient to shipped all parcel in days
            // checking mid value is answer or not
            if( LW(weights, mid, days) ){
                ans = mid;
                H = mid-1;
            }
            else{
                L = mid+1;
            }
        }
        return ans;
    }
};