class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int check = -1;
        sort(arr.begin(),arr.end());
        int diff = arr[1]-arr[0];
        for(int i = 1; i < arr.size()-1; i++){
            if(arr[i+1]-arr[i] != diff ){
                check++;
                break;
            }
        }
        // if check value is same as -1 then arr is AP otherwise it is not
        if( check == -1){
            return true;
        }
        else{
            return false;
        }
        
    }
};