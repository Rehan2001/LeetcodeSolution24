// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans;
        int s = 1;
        int e = n;
        while(s <= e){
            int mid = s + (e-s)/2;
            bool res = isBadVersion(mid);
            if(res == false){
                s = mid + 1;
            }
            else if(res == true){
                e = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};