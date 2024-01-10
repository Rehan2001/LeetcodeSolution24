class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int numMoves = 0;
        int sum = 0;
        //if target on the given pattern 1,3,6,10,15,21,28,36,45,55,..
        while(sum < target){
            numMoves++;
            sum += numMoves;
        }
        //if target not on the given pattern then sum > target
        while((sum -  target) % 2 != 0){
            numMoves++;
            sum += numMoves;
        }
        return numMoves;
    }
};