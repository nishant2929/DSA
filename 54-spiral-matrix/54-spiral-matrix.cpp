class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rowsize=matrix.size();
        int colsize= matrix[0].size();
        int startrow=0;
        int endrow=rowsize;
        int startcol=0;
        int endcol=colsize;
        int total= rowsize*colsize;
        int number=0;
        
        while(number<total){
            
            for(int i=startcol;(number<total and i<endcol);i++){
                ans.push_back(matrix[startrow][i]);
                number++;
            }
            startrow++;
            
            
            for(int i=startrow;(number<total and i<endrow);i++){
                ans.push_back(matrix[i][endcol-1]);
                 number++;
            }
            endcol--;
           
            
            for(int i=endcol-1;(number<total and i>=startcol);i--){
                ans.push_back(matrix[endrow-1][i]);
                number++;
            }
            endrow--;
            
            
            for(int i=endrow-1;(number<total and i>=startrow);i--){
                ans.push_back(matrix[i][startcol]);
                  number++;  
            }
            startcol++;
           
            
        }
        return ans;
    }
};