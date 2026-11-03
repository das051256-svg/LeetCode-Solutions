class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total= 0;
        for(int i=0; i<nums.size(); i++){
            total+= nums[i];
        }
        int pivot= -1;
        for(int i=0; i<nums.size(); i++){
            int left= 0;
            int right= 0;
            for(int j= nums.size()-1; j>i; j--){
                right+= nums[j];
            }
            left= total- nums[i]- right;
            if(right==left){
                pivot= i;
                break;
            }
        }
        return pivot;
    }
};