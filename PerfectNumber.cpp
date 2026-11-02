class Solution {
public:
    bool checkPerfectNumber(int num) {
        int compare = 0;
        for(int i=1; i < num; i++){
            if(num % i == 0){
                compare = compare + i;
            }
        }

        if(compare == num){
            return true;
        }
        else{
            return false;
        }
    }
};

//sum of divisors = number
//https://leetcode.com/problems/perfect-number/
