class Solution {
public:
    bool isPalindrome(int x) {
        if(x == 0){
            return true;
        }
        else if(x < 0){
            return false;
        }
        else{
            long long int num = x;
            //reveese the number
            long int rem;
            long int revNum = 0;
            while(x != 0){
                rem = x % 10;
                revNum = revNum*10 + rem;
                x = x / 10;
            }
            // check the number is palindrome or not
            if(num == revNum){
                return true;
            }
            else{
                return false;
            }
        }
        
        
    }
};