class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int ans;
        //all +ve (0 is not +ve) ~ btw next ele is 0/1
        //sumOfElement <= maxSum
        //nums[index] ismaximized & return nums[index]
        //[0,1*,2,3,4,5,6,7]
        //[1,1*,1,1,1,1,1,1]
        //[4,5*,4,3,2,1,1,1]
        int totalSum = 0;
        //binary search for finding maximized element of nums[index] btw 1 & maxSum indclude them
        int low = 1;
        int high = maxSum;
        long long int mid;
        while(low <= high){
            mid = low + (high-low)/2; // value of nums[index] = mid
            //right side sum
            long long int Rsum = 0;
            if((mid-1) < (n-1-index)){
                Rsum = ((mid-1)*(mid-1+1))/2 + ((n-1-index)-(mid-1));
            }
            else if((mid-1) > (n-1-index)){
                long long int emptyntr = ((mid-1)-(n-1-index));
                Rsum = ((mid-1)*(mid-1+1))/2 - (emptyntr*(emptyntr+1))/2;
            }
            else{
                Rsum = ((mid-1)*(mid-1+1))/2;
            }
            //left side sum
            long long int Lsum = 0;
            if((mid-1) < (index)){
                Lsum = ((mid-1)*(mid-1+1))/2 + ((index)-(mid-1));
            }
            else if((mid-1) > (index)){
                long long int emptyntl = ((mid-1)-(index));
                Lsum = ((mid-1)*(mid-1+1))/2 - (emptyntl*(emptyntl+1))/2;
            }
            else{
                Lsum = ((mid-1)*(mid-1+1))/2;
            }
            long long totalSum = Lsum + mid + Rsum;
            //check for totalSum nearest to maxSum
            if(totalSum < maxSum){
                low = mid+1;
                ans = mid;
            }
            else if(totalSum > maxSum){
                high = mid-1;
            }
            else{
                ans = mid;
                break;
            }
        }
        return ans;
    }
};