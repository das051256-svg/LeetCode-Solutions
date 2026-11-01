class Solution {
public:
    int minimumSum(int num) {
        string s= to_string(num);
        sort(s.begin(), s.end());
        int min= 10000;
        do{
            int n= stoi(s);
            int new1= n/100;
            int new2= n%100;
            if((new1+new2)<min)
            min= new1+ new2;
        }while(next_permutation(s.begin(), s.end()));
        return min;
    }
};