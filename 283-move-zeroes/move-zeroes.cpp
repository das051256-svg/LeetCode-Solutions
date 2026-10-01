class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[count]=nums[i];
                count++;
            }
        }
        int j= nums.size()-1;
        while((nums.size()-count)>0){
            nums[j]= 0;
            j--;
            count++;
        }
    }
};