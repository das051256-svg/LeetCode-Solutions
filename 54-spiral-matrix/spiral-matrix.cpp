class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> v;
        int start_row= 0;
        int start_col= 0;
        int end_row= matrix.size()-1;
        int end_col= matrix[0].size()-1;
        int r= end_row+1;
        int c= end_col+1;
        int count=0;
        while(count<(r*c)){
            for(int i=start_col; i<=end_col; i++){
                count++;
                if(count>(r*c))
                break;
                v.push_back(matrix[start_row][i]);
            }
            start_row++;
            for(int i=start_row; i<=end_row; i++){
                count++;
                if(count>(r*c))
                break;
                v.push_back(matrix[i][end_col]);
            }
            end_col--;
            for(int i=end_col; i>=start_col; i--){
                count++;
                if(count>(r*c))
                break;
                v.push_back(matrix[end_row][i]);
            }
            end_row--;
            for(int i=end_row; i>=start_row; i--){
                count++;
                if(count>(r*c))
                break;
                v.push_back(matrix[i][start_col]);
            }
            start_col++;
        }
        return v;
    }
};