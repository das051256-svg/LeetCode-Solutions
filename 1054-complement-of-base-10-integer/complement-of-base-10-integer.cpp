class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        if(n==0)
        return 1;
        int ans=0;
        int count=0;
        while(m!=0){
            count++;
            m= m>>1;
        }
        int mask= pow(2,count)-1;
        ans= (n^mask);
        return ans;
    }
};