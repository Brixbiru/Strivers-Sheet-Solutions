class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int count = 0;

            for( int i=0; i<nums1.size() && count < nums2.size(); ){
                if(nums1[i] == nums2[count]){
                    result.push_back(nums1[i]);
                    i++;
                    count++;
                }

                if(nums1[i] < nums2[count]){
                    i++;
                }

                if(nums1[i] > nums2[count]){
                    count++;
                }
            }
        return result;
        
    }
};

//https://takeuforward.org/practice/dsa/intersection-of-two-sorted-arrays
