class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        vector <int> v= weights;
        sort(v.begin(), v.end());
        int start= v[v.size()-1];
        int end= 0;
        for(int i=0; i<weights.size(); i++){
            end+= weights[i];
        }
        int mid= start+ (end- start)/2;
        int ans= 0;
        while(start<=end){
            int d= 1;
            int sum= 0;
            for(int i=0; i<weights.size(); i++){
                if(sum+weights[i]<=mid)
                sum+= weights[i];
                else{
                    d++;
                    sum= weights[i];
                }
            }
            if(d<=days){
                ans= mid;
                cout<< ans<< endl;
                end= mid-1;
            }
            else
            start= mid+1;
            mid= start+ (end-start)/2;
        }
        return ans;
    }
};