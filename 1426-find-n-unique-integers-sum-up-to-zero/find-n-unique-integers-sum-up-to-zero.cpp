class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> nums;
        if(n%2 == 0){ // even
            for(int i = 1; i <= n; i++){
                int mid = n/2; //2
                if(i <= mid){
                    nums.push_back(i);
                }
                else if(i > mid){
                    nums.push_back(-(n-i+1));
                }
            } 
        }
        else if(n%2 != 0){ //odd
            for(int i = 1; i <= n; i++){
                int mid = n/2 + 1; // 2.5
                if(i < mid){
                    nums.push_back(i);
                }
                else if(i == mid){
                    nums.push_back(0);
                }
                else if(i > mid){
                    nums.push_back(-(n-i+1));
                }
            } 
        }
        
        return nums;

    }
};