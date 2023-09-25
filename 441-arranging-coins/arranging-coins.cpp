class Solution {
public:
    int arrangeCoins(int n) {
        int ans;
        long long sum = 0;
        int i = 1;
        while(sum <= n){
            ans = i-1;
            sum = sum + i;
            i++;
        }
        return ans;
    
    }
};