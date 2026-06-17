class NumMatrix {
private:
    vector<vector<int>> prefixmatrix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int l=matrix[0].size(),h=matrix.size();
        prefixmatrix = vector<vector<int>> (h,vector<int>(l,0));
        for(int i=0;i<h;i++){
            prefixmatrix[i][0]+=matrix[i][0];
            for(int j=1;j<l;j++){
                prefixmatrix[i][j]=prefixmatrix[i][j-1]+matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<=row2;i++){
            sum+=prefixmatrix[i][col2]-(col1==0?0:prefixmatrix[i][col1-1]);
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */