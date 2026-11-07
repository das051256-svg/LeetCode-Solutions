class Solution {
public:
    int arrangeCoins(int n) {
        int start= 1;
        int end= n;
        int x= 1;
        while(start<=end){
            int mid= start+ (end-start)/2;
            long long int ans= (1LL*mid*(mid+1))/2;
            if(ans>n){
                end= mid-1;
            }
            else{
                x= mid;
                start= mid+1;
            }
        }
        return x;
    }
};