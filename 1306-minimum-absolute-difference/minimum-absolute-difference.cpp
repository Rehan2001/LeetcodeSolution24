class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        // 1,2,3,4 - 1,3,4,10,15 - mini diffr only if we take adjacent element
        int min = INT_MAX;
        for(int i = 0; i < arr.size()-1; i++){
            int temp = abs(arr[i] - arr[i+1]);
            if(temp == min){
                res.push_back({arr[i] , arr[i+1]});
            }
            else if(temp < min){
                res.clear();
                min = temp;
                res.push_back({arr[i] , arr[i+1]});
            }
            
        }

        return res;
        
    }
};