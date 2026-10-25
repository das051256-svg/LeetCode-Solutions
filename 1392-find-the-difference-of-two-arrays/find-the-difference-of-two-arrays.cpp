class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> v(2);
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        for(int num1: set1){
            if(set2.count(num1)==0){
                v[0].push_back(num1);
            }
        }
        for(int num2: set2){
            if(set1.count(num2)==0){
                v[1].push_back(num2);
            }
        }
        return v;
    }
};