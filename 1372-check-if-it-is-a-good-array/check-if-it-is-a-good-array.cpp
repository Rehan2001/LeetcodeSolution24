class Solution {
public:
    int GCD(int a , int b){
        int l = max(a , b);
        int s = min(a , b);
        int temp = 1;
        while(temp != 0 && s != 0){
            temp = l%s;
            l = s;
            s = temp;
        }
        return l;
        
    }

    bool isGoodArray(vector<int>& nums) {
        bool ans;
        int n = nums.size();

        if(n == 1){
            if(nums[0] == 1){
                ans = true;
            }
            else{
                ans = false;
            }
        }
        else if(n == 2){
            int temp = GCD(nums[n-2] , nums[n-1]);
            if(temp == 1){
                ans = true;
            }
            else{
                ans = false;
            }
        }
        else if( n > 2){
            int temp = GCD(nums[n-2] , nums[n-1]);
            int var;
            for(int i = n-3; i >= 0; i--){
                var = GCD(nums[i] , temp);
                if(var == 1){
                    ans = true;
                    break;
                }
                temp = var;
            }
            if(var != 1){
                ans = false;
            }
        }

        return ans;

    }
};