class Solution {
public:
    int mySqrt(int x) {
        int anSqrt;
        if(x == 0){
            return x;
        }
        else if(x == 1){
            return x;
        }
        else{ 
            int s = 1;
            int e = x/2; 
            //sqrt of any number is always less than of equal to half of that num
            while(s <= e){

                int mid = s + (e-s)/2;

                if((x/mid) > mid){
                    s = mid + 1;
                    anSqrt = mid;
                }
                else if((x/mid) < mid){
                    e = mid -1;
                }
                else{
                    anSqrt = mid;
                    break;
                }
            }
        }
        
        return anSqrt;
    }
};