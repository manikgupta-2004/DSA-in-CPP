class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while(n>0){
            int k = n%10;
            product = product*k;
            sum = sum+k;
            n = n/10;
        }
        int diff = product - sum;
        return diff;
    }
};