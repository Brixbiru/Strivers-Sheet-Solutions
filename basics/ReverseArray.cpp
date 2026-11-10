class Solution{
public:
    void reverse(int arr[], int n){
        int a[n];
        for(int i = 0; i<n ; i++){
            a[i] = arr[n-1-i];
        }

        for(int i=0; i<n; i++){
            arr[i] = a[i];
        }
    }
};

//https://takeuforward.org/practice/dsa/reverse-an-array
