class Solution {
public:
    int maxArea(vector<int>& h) {
        int start=0;
        int end=h.size()-1;
        int mostwater=0;
        while(start<end){
            int maxi = min(h[start],h[end]) * (end-start);
            mostwater= max(maxi,mostwater);
              if(h[start]<h[end]){
                  start++;
              }else{
                  end--;
              }
        }
        return mostwater;
    }
};