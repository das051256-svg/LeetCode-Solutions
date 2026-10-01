class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        int arr[1001]={0};
        for(int i= 0; i<nums1.size(); i++){
            for(int j= 0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    arr[nums1[i]]++;
                }
            }
        }
        for(int i=0; i<=1000; i++){
            if(arr[i]>=1){
                v.push_back(i);
            }
        }
        return v;
    }
};