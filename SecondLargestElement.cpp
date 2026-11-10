class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        int temp = nums.front();
        for(int num:nums){
            if(num!= temp){
                return num;
            }
        }

        return -1;

    }
};

//https://takeuforward.org/practice/dsa/second-largest-element
