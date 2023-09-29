class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans;
        int s = 0;
        int e = arr.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(arr[mid] >= arr[s] && arr[mid] >= arr[e]){
                ans = mid;
                s++;
                e--;
            }
            else if(arr[mid] < arr[e]){
                s++;
            }
            else if(arr[mid] < arr[s]){
                e--;
            }
        }
        return ans;
        
    }
};