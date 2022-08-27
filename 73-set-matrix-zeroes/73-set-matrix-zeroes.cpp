class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> copy(matrix.begin(),matrix.end());
        
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(copy[i][j]==0){
                    for(int k=0;k<col;k++){
                        matrix[i][k]=0;
                    }
                    for(int l = 0;l<row;l++){
                        matrix[l][j]=0;
                    }
                    
                }
                
            }
        }
    }
};