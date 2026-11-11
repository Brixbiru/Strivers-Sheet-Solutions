class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> p;
        vector<int> ne;

        for(int num:nums){
            if(num < 0){
                ne.push_back(num);
            }
            else{
                p.push_back(num);
            }
        }

        nums.clear();
        for(int i=0; i<n/2; i++){
            nums.push_back(p[i]);
            nums.push_back(ne[i]);
        }

        return nums;
    }
};

//https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
