class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& images) {
        for(int i=0;i<images.size();i++){
                reverse(images[i].begin(),images[i].end());
    
        }
        
        for(int i=0;i<images.size();i++){
            for(int j=0;j<images[i].size();j++){
                if(images[i][j]==0){
                    images[i][j]=1;
                }else{
                    images[i][j]=0;
                }
            }
        }
        return images;
    }
};