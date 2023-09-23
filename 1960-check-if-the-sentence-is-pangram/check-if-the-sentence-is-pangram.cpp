class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool ans;
        int n = sentence.size();
        int count  = 0;
        if(n < 25){
            return false;
        }
        else{
            
                for(char j = 'a'; j <= 'z'; j++){
                    for(int i = 0; i < n; i++){
                        if(sentence[i] == j){
                            count += 1;
                            break;
                        }
                    }   
                }
        }
        if(count == 26){
            ans = true;
        }
        else{
            ans = false;
        }
        return ans;
    }
};