class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start= 0;
        int end= nums.size()-1;
        int mid= start+ (end- start)/2;
        vector <int> v;
        v.push_back(-1);
        v.push_back(-1);
        if(nums.size()==0)
        return v;
        int left= nums.size()-1;
        while(start<= end){
            if(nums[mid]== target){
                if(mid<left)
                left= mid;
                end= mid-1;
            }
            else if(nums[mid]< target)
            start= mid+1;
            else
            end= mid-1;
            mid= start+ (end-start)/2;
        }
        if(nums[left]== target)
        v[0]= left;
        int s= 0;
        int e= nums.size()-1;
        int m= s+ (e- s)/2;
        int right= 0;
        while(s<= e){
            if(nums[m]== target){
                if(m> right)
                right= m;
                s= m+1;
            }
            else if(nums[m]> target)
            e= m-1;
            else
            s= m+1;
            m= s+ (e-s)/2;
        }
        if(nums[right]== target)
        v[1]= right;
        return v;
    }
};