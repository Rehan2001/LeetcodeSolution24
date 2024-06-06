class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string temp = "";
        for(int i = 0; i < indices.size(); i++){
            for(int j = 0; j < indices.size(); j++){
                if( i == indices[j] ){
                    temp += s[j];
                    break;
                }
            }
        }

        return temp;
        
    }
};