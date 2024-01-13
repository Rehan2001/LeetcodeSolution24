class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //[L1,2,3k',4L'k'',5H',6k,7,8,9,10,11H]
        //[3,6,7,11]
        long long int k;
        long long int ans;
        long long int L = 1;
        long long int H = *max_element(piles.begin(), piles.end());
        long long int count;
        while(L <= H){
            count = 0;
            k = L + (H-L)/2; //6 , 3 , 4
            for(int i = 0; i < piles.size(); i++){
                count += ceil(double(piles[i]) / k); // 6 , 10 , 8
            }

            if(count <= h){ // 6 <= 8, 8 <= 8
                ans = k; // k = 6,4
                H = k-1;
            }
            else if(count > h){ // 10 > 8
                L = k+1;
            }
        }
        return ans;
    }
};