class Solution {
public:
    int reverseNumber(int n) {
        if(n == 0){
            return 0;
        }
        int a[5] = {0};
        int count = 0;

        while(n > 0){
            a[count] = n % 10;
            n = n/10;
            count++;
        }

        int result = 0;
        for( int i=0; i<count; i++){
            result = result *10 + a[i];
        }

        return result;
    }
};

//https://takeuforward.org/practice/dsa/reverse-a-number
