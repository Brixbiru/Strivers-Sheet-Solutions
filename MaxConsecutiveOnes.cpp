class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0;
        int count = 0;
        for(int num:nums){
            if(num == 1){
                count++;
            }
            if(num == 0){
                count = 0;
            }

            if(temp < count){
                temp = count;
            }
        }

        return temp;
    }
};

//https://leetcode.com/problems/max-consecutive-ones/
