class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> Leftp(n);
        vector<int> Rightp(n);
        Leftp[0] = 1;
        Rightp[n-1] = 1;
        //for calculating left product
        for(int i = 1; i < n; i++){
          Leftp[i] = Leftp[i-1]*nums[i-1];
        }
        //for calculating right product
        for(int i = n-2; i >= 0; i--){
            Rightp[i] = Rightp[i+1]*nums[i+1];
        }
        //for ans = leftp * Rightp
        for(int i = 0; i < n; i++){
            ans[i] = Leftp[i]*Rightp[i];
        }
        return ans;
    }
};