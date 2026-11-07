class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row= grid.size();
        int col= grid[0].size();
        int i= 0;
        int j= col-1;
        int n= row;
        int count= 0;
        while(i<row && j>=0){
            int mid= grid[i][j];
            if(mid<0){
                count+= n;
                j--;
            }
            else{
                i++;
                n--;
            }
        }
        return count;
    }
};