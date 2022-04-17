class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
//       int row= matrix.size();
//        // int col = matrix[0].size();
//         int startrow= 0;
//         int startcol =0;
//         int endrow=row-1;
//         int endcol=row-1;
//       //  int n =0;
//         int total = row*row;
//         while(startcol<endcol){
//             for(int i=0;i<startrow-endcol;i++){
//                 int temp=matrix[startrow][startcol+i];
//                matrix[startrow][startcol+i]=matrix[endrow-i][startcol];//n++;
//                matrix[endrow-i][startcol]=matrix[endrow][endcol-i];//n++;
//                matrix[endrow][endcol-i]= matrix[startrow+i][endcol];//n++;
//                matrix[startrow+i][endcol] = temp; //n++;
//             }
            
//             startrow--;
//             endrow--;
//             startcol--;
//             endcol--;  
            
//         }
        
        int n = matrix.size();
        for (int i = 0; i < (n + 1) / 2; i ++) {
            for (int j = 0; j < n / 2; j++) {
                int temp = matrix[n - 1 - j][i];
                matrix[n - 1 - j][i] = matrix[n - 1 - i][n - j - 1];
                matrix[n - 1 - i][n - j - 1] = matrix[j][n - 1 -i];
                matrix[j][n - 1 - i] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
    }
};