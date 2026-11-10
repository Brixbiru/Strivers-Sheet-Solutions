class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        int pos = 0;

        for(int i=0; i< n; i++){
            if(nums[i]!=0){
                temp[pos] = nums[i];
                pos++;
            }
        }

        while(pos - n - 1 > 0){
            temp[pos] = 0;
            pos++;
        }

        nums = temp;
    }
};

//https://leetcode.com/problems/move-zeroes/description/
