class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int maxi= 0;
        int max= 0;
        int sum= 0;
        for(int j= k; j<nums.size(); j++){
            if(maxi< nums[j-k])
            maxi= nums[j-k];
            sum= nums[j]+maxi;
            if(max< sum)
            max= sum;
        }
        return max;
    }
};