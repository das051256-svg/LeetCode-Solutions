class Solution {
public:
    int mySqrt(int x) {
        int ans= 0;
        for(long long int i= 0; i<=46340; i++){
            if((i*i)==x)
            return i;
            else if((i*i)<x && ((i+1)*(i+1))>x){
                ans= i;
                break;
            }
        }
        return ans;
    }
};