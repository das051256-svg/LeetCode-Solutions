class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> v= nums;
        int n= nums.size();
        if(k>n){
            k= k%n;
        }
        for(int i=0; i<k; i++)
        nums[i]= v[n-k+i];
        for(int i=k; i<n; i++)
        nums[i]= v[i-k];
    }
};