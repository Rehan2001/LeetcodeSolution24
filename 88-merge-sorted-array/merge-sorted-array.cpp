class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(m);
        temp = nums1;
        int i = 0; // for m
        int j = 0; // for n
        int k = 0; // for nums1
        while( i < m && j < n ){
            if(temp[i] > nums2[j]){
                nums1[k] = nums2[j];
                k++;
                j++;
            }
            else{
                nums1[k] = temp[i];
                k++;
                i++;
            }
        }
        // left element in nums2
        while(j < n){
            nums1[k] = nums2[j];
            k++;
            j++;
        }
        // left element in temp
        while(i < m){
            nums1[k] = temp[i];
            k++;
            i++;
        }
    }
};