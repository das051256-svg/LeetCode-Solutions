class Solution {
public:
    int subtractProductAndSum(int n) {
        int product= 1;
        int sum= 0;
        int diff= 0;
        while(n!=0){
            int digit= n%10;
            product*= digit;
            sum+= digit;
            n= n/10;
        }
        diff= product- sum;
        return diff;
    }
};