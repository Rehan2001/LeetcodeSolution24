class Solution {
public:
    bool isPerfectSquare(int num) {
        bool ans = false;
        if(num == 1){
            return true;
        }
        else{
            for(int i = 1; i <= num/2; i++){
                if(pow(i,2) == num){
                    ans = true;
                    break;
                }
            }
        }
        
        return ans;
       
    }
};