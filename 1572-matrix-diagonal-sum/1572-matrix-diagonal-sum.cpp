class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        if(mat.size()%2==0){
            for(int i=0;i<mat.size();i++){
                sum=sum+mat[i][i];
                
            }
            for(int i=mat.size()-1;i>=0;i--){
                sum = sum+ mat[i][mat.size()-1-i];
                
        }
        }else{
           for(int i=0;i<mat.size();i++){
                sum=sum+mat[i][i];
                
            }
            for(int i=mat.size()-1;i>=0;i--){
                sum = sum+mat[i][mat.size()-1-i];
        }
            int n=mat.size()/2;
            sum=sum-mat[n][n];
            
    }
        return sum;
    }
};