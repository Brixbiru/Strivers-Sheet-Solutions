class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> copy(n);
        k = k % n;

        for(int i=0; i<n; i++){
            copy[(i + k) % n] = nums[i];
        }

        nums = copy;
    }
};

//https://leetcode.com/problems/rotate-array/description/
