class Solution {
public:
    void transpose(vector<vector<int>>& mat,int r,int c){
        vector<vector<int>>temp(c,vector<int>(r));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                temp[j][i]=mat[i][j];
            }
        }
        mat=temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        transpose(matrix,r,c);
        for(int i=0;i<r;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};