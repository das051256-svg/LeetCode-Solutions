class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> copy= matrix;
        int r= matrix.size();
        int c= matrix[0].size();
        int row= 0;
        for(int i=0; i<r; i++){
            int col= 0;
            for(int j=c-1; j>=0; j--){
                matrix[row][col]= copy[j][i];
                col++;
            }
            row++;
        }
    }
};