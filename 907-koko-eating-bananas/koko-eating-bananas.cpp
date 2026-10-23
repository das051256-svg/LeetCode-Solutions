class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int start= 1;
        int end= piles[piles.size()-1];
        int mid= start+ (end-start)/2;
        int min= 0;
        if(h== piles.size())
        return end;
        while(start<= end){
            long long int count= 0;
            for(int i=0; i<piles.size(); i++){
                if(piles[i]%mid==0)
                count+= piles[i]/mid;
                else
                count+= (piles[i]/mid)+1;
            }
            if(count> h)
            start= mid+1;
            else{
                min= mid;
                end= mid-1;
            }
            mid= start+ (end-start)/2;
        }
        return min;
    }
};