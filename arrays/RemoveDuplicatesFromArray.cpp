class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int n = nums.size();
        vector<int> result;
        result.push_back(nums[0]);

        for(int i=1; i<n; i++){
            if(result.back()!=nums[i]){
                result.push_back(nums[i]);
            }
        }

        nums = result;

        return result.size();
    }
};

//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
