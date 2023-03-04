class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int minans=INT_MAX;
        int cnt=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                sum+= abs(matrix[i][j]);
                minans = min(minans, abs(matrix[i][j]));
                if(matrix[i][j]<0){
                    cnt++; 
                }
            }
        }
       cout<<minans<<" ";
        if(cnt%2==0){
            return sum;
        }
        return sum-(2*minans);
    }
};