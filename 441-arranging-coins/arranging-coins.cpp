class Solution {
public:
    int arrangeCoins(int n) {
        vector <int> v;
        int count= 1;
        int interval= 2;
        while(count<=INT_MAX){
            v.push_back(count);
            if(count>(INT_MAX-interval))
            break;
            count+= interval;
            interval++;
        }
        int start= 1;
        int end= v.size()-1;
        int ans= 0;
        while(start<=end){
            int mid= start+ (end-start)/2;
            if(v[mid]==n){
                ans= mid;
                break;
            }
            else if(v[mid]>n){
                end= mid-1;
            }
            else{
                ans= mid;
                start= mid+1;
            }
        }
        return ans+1;
    }
};