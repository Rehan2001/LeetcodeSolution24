class Solution {
public:
    int reverse(int x) {
        long long int ans = 0;
        long long int temp = abs(x);
        long long int revX = 0;
        while(temp > 0){
            long long int rem = temp % 10;
            revX = revX*10 + rem;
            temp = temp / 10;
        }
        // finding actual x is +ve or -ve
        if(revX >= -2147483648 && revX <= 2147483647){
            if( x >= 0){
            ans = revX;
            }
            else{
                ans = -revX;
            }
        }
        

        return ans;
        
    }
};