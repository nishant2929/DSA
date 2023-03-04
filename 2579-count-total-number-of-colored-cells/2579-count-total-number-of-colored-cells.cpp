class Solution {
public:
    long long coloredCells(long long n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 5;
        }
        unsigned long long ans =  (n*n + ((n-1)*(n-1)));
     return ans;
    }
};