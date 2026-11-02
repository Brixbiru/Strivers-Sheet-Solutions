class Solution {
public:
    int factorial(int n) {
        if( n == 0){
            return 1;
        }

        return n * factorial(n-1);
    }
};

//https://takeuforward.org/practice/dsa/factorial-of-a-given-number-i
