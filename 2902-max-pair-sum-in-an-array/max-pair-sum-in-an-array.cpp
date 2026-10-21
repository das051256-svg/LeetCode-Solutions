class Solution {
private:
    int maxDigit(int n){
        int maxi= -1;
        while(n!=0){
            int d= n%10;
            if(maxi<d)
            maxi= d;
            n= n/10;
        }
        return maxi;
    }
public:
    int maxSum(vector<int>& nums) {
        int max= -1;
        for(int i=0; i<nums.size(); i++){
            int sum= 0;
            for(int j=nums.size()-1; j>i; j--){
                if((maxDigit(nums[i])) == (maxDigit(nums[j]))){
                    sum= nums[i]+nums[j];
                    if(sum>max)
                    max= sum;
                }
            }
        }
        return max;
    }
};