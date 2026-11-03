class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max= nums[nums.size()-1];
        int count= 0;
        for(int i=0; i<nums.size()-1; i++){
            count+= max- nums[i];
        }
        return count;
    }
};