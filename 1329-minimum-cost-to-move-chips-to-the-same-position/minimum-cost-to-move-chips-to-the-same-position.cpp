class Solution {
public:
    
    int minCostToMoveChips(vector<int>& position) {
        int ans;
        // counting cost
        int countE = 0;
        int countO = 0;
        for(int i = 0; i < position.size(); i++){
            if(position[i] % 2 == 0){
                countE = countE + 1;
            }
            else{
                countO = countO + 1;
            }
        }
        ans = min(countE , countO);
        return ans;
        
    }
};