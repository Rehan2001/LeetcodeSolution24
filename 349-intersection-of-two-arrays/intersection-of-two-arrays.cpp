class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i < nums2.size(); i++){
            if(count(ans.begin(), ans.end(), nums2[i])){
                continue;
            }
            else{
                if(count(nums1.begin(), nums1.end(), nums2[i])){
                    ans.push_back(nums2[i]);
                }
            }
        }
      
        
        return ans;
        
    }
};