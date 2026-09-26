class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n= nums.size();
        vector <int> v;
        sort(nums.begin(), nums.end());
        for(int i= 0; i<n; i++){
            if((i+1)<n && nums[i]==nums[i+1]){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};