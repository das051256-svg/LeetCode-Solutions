class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int count= 1;
        int start_row= 0;
        int start_col= 0;
        int end_row= n-1;
        int end_col= n-1;
        vector<vector<int>> matrix(n, vector<int>(n,0));
        while(count<= (n*n)){
            for(int i= start_col; i<= end_col; i++){
                if(count> (n*n))
                break;
                matrix[start_row][i]= count;
                count++;
            }
            start_row++;
            for(int i= start_row; i<= end_row; i++){
                if(count> (n*n))
                break;
                matrix[i][end_col]= count;
                count++;
            }
            end_col--;
            for(int i= end_col; i>= start_col; i--){
                if(count> (n*n))
                break;
                matrix[end_row][i]= count;
                count++;
            }
            end_row--;
            for(int i= end_row; i>= start_row; i--){
                if(count> (n*n))
                break;
                matrix[i][start_col]= count;
                count++;
            }
            start_col++;
        }
        return matrix;
    }
};