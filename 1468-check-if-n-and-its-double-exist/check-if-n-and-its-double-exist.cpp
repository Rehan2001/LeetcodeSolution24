class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < arr.size(); j++){
                if( (arr[i] == 2 * arr[j]) && i != j ){
                    return true;
                }
            }
        }
        return false;
    }
};