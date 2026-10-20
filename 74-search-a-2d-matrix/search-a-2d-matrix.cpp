class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector <int> v;
        int m= matrix.size();
        int n= matrix[0].size();
        int start= 0;
        int end= (m*n)-1;
        while(start<=end){
            int mid= start+ (end-start)/2;
            int x= matrix[mid/n][mid%n];
            if(x== target){
                return true;
                break;
            }
            else if(x> target){
                end= mid-1;
            }
            else{
                start= mid+1;
            }
        }
        return false;
    }
};