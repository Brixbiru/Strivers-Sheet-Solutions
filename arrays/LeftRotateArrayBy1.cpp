class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        vector<int> copy(n);

        copy[n-1] = nums[0];
        for(int i=0; i<n-1; i++){
            copy[i] = nums[i+1];
        }

        nums = copy;
    }
};

//https://takeuforward.org/practice/dsa/left-rotate-array-by-one
