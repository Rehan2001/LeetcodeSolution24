class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int sum;
        int i = n-1;
        int carr = 0;
        while(k != 0 || carr != 0){
            sum = (k%10) + carr ;
            if(i >= 0){
                sum = sum + num[i];
                num[i] = sum%10;
            }
            else{
                num.insert(num.begin() , sum%10);
            }
            carr = (sum/10) ;
            k =  (k/10);
            i--;
        }
        
        return num;
        
    }
};