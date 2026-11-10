class Solution {
public:
    int GCD(int n1,int n2) {

        int n = n1;
        if(n2<n1){
            n = n2;
        }

        for(int i=n; i>0 ;i--){
            if(n1 % i == 0 && n2 % i == 0){
                return i;
            }
        }
    }
};

//https://takeuforward.org/practice/dsa/gcd-of-two-numbers
